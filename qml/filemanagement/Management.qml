import QtQuick 2.6
import QtQuick.Layouts 1.3

import "../elements"

FadeInTemplate {

    id: management_top

    visible: (opacity!=0)
    opacity: 0
    Behavior on opacity { NumberAnimation { duration: 200 } }

    width: mainwindow.width
    height: mainwindow.height

    showSeperators: false

    property string current: ""
    onCurrentChanged: variables.filemanagementCurrentCategory = current

    signal hideAllItems()

    content: [

        RowLayout {

            id: layout
            spacing: 6

            Rectangle {

                id: category

                width: 300
                height: management_top.height-250
                color: "transparent"

                ColumnLayout {

                    anchors.centerIn: category

                    spacing: 10

                    ManagementNavigation {
                        text: qsTr("Copy")
                        category: "cp"
                    }
                    ManagementNavigation {
                        text: qsTr("Delete")
                        category: "del"
                    }
                    ManagementNavigation {
                        text: qsTr("Move")
                        category: "mv"
                    }
                    ManagementNavigation {
                        text: qsTr("Rename")
                        category: "rn"
                    }

                }

            }

            Item {

                id: management_item

                width: management_top.width
                height: management_top.height-250

                ManagementContainer {
                    category: "cp"
                    itemSource: "Copy.qml"
                }
                ManagementContainer {
                    category: "del"
                    itemSource: "Delete.qml"
                }
                ManagementContainer {
                    category: "mv"
                    itemSource: "Move.qml"
                }
                ManagementContainer {
                    category: "rn"
                    itemSource: "Rename.qml"
                }

            }

        }

    ]

    signal permanentDeleteFile()

    Connections {
        target: call
        onFilemanagementShow: {
            if(variables.currentFile == "") return
            management_top.current = category
            show()
        }
        onShortcut: {
            if(!management_top.visible) return
            if(sh == "Escape")
                hide()
        }
    }

}
