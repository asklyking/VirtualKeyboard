import QtQuick 2.0
import Keys 1.0

BaseKey {
    id: btn
    property string text: ''
    property string shiftText: text

    Text {
        text: keyboardModel.isShiftMode ? parent.shiftText : parent.text
        anchors.centerIn: parent
    }

    onPressedBtn: {
        console.log(keyboardModel.isShiftMode ? shiftText : text)
    }
}
