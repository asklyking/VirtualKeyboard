import QtQuick 2.0
import Keys 1.0

BaseKey {
    property string text: ''
    property string shiftText: text

    Text {
        text: parent.text
        anchors.centerIn: parent
    }
}
