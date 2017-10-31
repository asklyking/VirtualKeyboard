import QtQuick 2.0
import Keys 1.0

BaseKey {
    id: btn
    property string text: ''
    property string shiftText: text

    Text {
        text: parent.text
        anchors.centerIn: parent
    }

    onPressedBtn: {
        keyboardModel.isShiftMode = !keyboardModel.isShiftMode
    }
}
