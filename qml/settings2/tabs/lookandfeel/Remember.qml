import QtQuick 2.3

import "../../../elements"
import "../../"

EntryContainer {

	id: item_top

	Row {

		spacing: 20

		EntryTitle {

			title: "Remember per session"

		}

		EntrySetting {

			Row {

				spacing: 10

				CustomCheckBox {
					id: remember_rotation
					text: qsTr("Remember Rotation/Flip")
				}

				CustomCheckBox {
					id: remember_zoom
					text: qsTr("Remember Zoom Level")
				}

			}

		}

	}

	function setData() {
		remember_rotation.checkedButton = settings.rememberRotation
		remember_zoom.checkedButton = settings.rememberZoom
	}

	function saveData() {
		settings.rememberRotation = remember_rotation.checkedButton
		settings.rememberZoom = remember_zoom.checkedButton
	}

}
