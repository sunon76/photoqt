import QtQuick 2.9

import "./handleshortcuts.js" as HandleShortcuts

Item {

    anchors.fill: parent

    MouseArea {
        enabled: variables.visibleItem==""
        anchors.fill: parent
        acceptedButtons: Qt.LeftButton|Qt.RightButton|Qt.MiddleButton
        onWheel: {

            var combo = ""

            if(wheel.modifiers & Qt.ControlModifier)
                combo += "Ctrl+";
            if(wheel.modifiers & Qt.AltModifier)
                combo += "Alt+";
            if(wheel.modifiers & Qt.ShiftModifier)
                combo += "Shift+";
            if(wheel.modifiers & Qt.MetaModifier)
                combo += "Meta+";
            if(wheel.modifiers & Qt.KeypadModifier)
                combo += "Keypad+";

            if(wheel.buttons & Qt.LeftButton)
                combo += "Left Button"
            if(wheel.buttons & Qt.MiddleButton)
                combo += "Middle Button"
            if(wheel.buttons & Qt.RightButton)
                combo += "Right Button"

            var threshold = Math.max(30, Math.max(0, Math.min(10, settings.mouseWheelSensitivity*120)))

            if(wheel.angleDelta.y < -threshold) {
                if(wheel.angleDelta.x < -threshold)
                    combo += "Wheel Up Left"
                else if(wheel.angleDelta.x > threshold)
                    combo += "Wheel Up Right"
                else
                    combo += "Wheel Up"
            } else if(wheel.angleDelta.y > threshold) {
                if(wheel.angleDelta.x < -threshold)
                    combo += "Wheel Down Left"
                else if(wheel.angleDelta.x > threshold)
                    combo += "Wheel Down Right"
                else
                    combo += "Wheel Down"
            } else {
                if(wheel.angleDelta.x < -threshold)
                    combo += "Wheel Left"
                else if(wheel.angleDelta.x > threshold)
                    combo += "Wheel Right"
            }


            for(var i = 0; i < variables.shortcuts.length; ++i) {

                if(variables.shortcuts[i][1] === combo) {
                    HandleShortcuts.whatToDoWithFoundShortcut(variables.shortcuts[i])
                    break;
                }

            }

        }
    }

}