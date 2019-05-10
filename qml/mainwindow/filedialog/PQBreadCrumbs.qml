import QtQuick 2.9

import "../../elements"

Item {

    id: bread_top

    property var pathParts: []

    height: 50
    Row {

        PQButton {

            id: backwards

            text: "<"

            enabled: filedialog_top.historyListIndex>0

            font.pointSize: 20
            width: 2*height/3

            y: (bread_top.height-height)/2

            onClicked: {
                if(filedialog_top.historyListIndex > 0) {
                    filedialog_top.historyListIndex -= 1
                    filedialog_top.setCurrentDirectory(filedialog_top.historyListDirectory[filedialog_top.historyListIndex], false)
                }
            }

        }

        PQButton {

            id: forwards

            text: ">"

            enabled: filedialog_top.historyListIndex<filedialog_top.historyListDirectory.length-1

            font.pointSize: 20
            width: 2*height/3

            y: (bread_top.height-height)/2

            onClicked: {
                if(filedialog_top.historyListIndex < filedialog_top.historyListDirectory.length-1) {
                    filedialog_top.historyListIndex += 1
                    filedialog_top.setCurrentDirectory(filedialog_top.historyListDirectory[filedialog_top.historyListIndex], false)
                }
            }

        }

        Rectangle {
            width: 5
            height: bread_top.height
            color: "transparent"
        }

        Rectangle {
            width: 1
            height: bread_top.height
            color: "#444444"
        }

        Rectangle {
            width: 5
            height: bread_top.height
            color: "transparent"
        }

        ListView {

            id: path

            width: bread_top.width-x
            height: bread_top.height

            clip: true
            interactive: false

            boundsBehavior: Flickable.StopAtBounds

            model: Math.max(0, 2*pathParts.length -1)

            orientation: Qt.Horizontal

            delegate: PQButton {

                id: modelentry
                text: index==0||index%2==0 ? "/" : pathParts[(index+1)/2]

                height: bread_top.height

                clickOpensMenu: index==0||index%2==0

                font.bold: true

                property string completePath: ""

                onClicked:
                    filedialog_top.setCurrentDirectory(completePath)

                Component.onCompleted: {
                    completePath = "/"
                    for(var i = 1; i <= (index+1)/2; ++i)
                        completePath += pathParts[i] + "/"
                    listMenuItems = handlingFileDialog.getFoldersIn(completePath)
                }

                onMenuItemClicked:  {
                    var newpath = "/"
                    for(var i = 1; i < (index+1)/2; ++i)
                        newpath += pathParts[i] + "/"
                    filedialog_top.setCurrentDirectory(newpath+"/"+item)
                }

            }

        }

    }

    Rectangle {

        anchors {
            left: parent.left
            right: parent.right
            bottom: parent.bottom
        }
        height: 1
        color: "#aaaaaa"
    }

}