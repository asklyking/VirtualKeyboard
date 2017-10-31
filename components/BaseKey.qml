import QtQuick 2.0
import Keys 1.0

Key {
    id: keyItem

    signal pressedBtn();
    signal longPressedBtn();

    Rectangle {
        anchors.fill: parent
        anchors.margins: 1
        border {
            width: 1
            color: "black"
        }

        radius: parent.height / 10
    }

    MouseArea {
        anchors.fill: parent

        onClicked: {
            pressedBtn()
        }

        onPressAndHold: {
            longPressedBtn()
        }
    }
}
