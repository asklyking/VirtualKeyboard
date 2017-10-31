import QtQuick 2.6
import QtQuick.Window 2.2
import Keys 1.0

Window {

    id: mainWindow

    visible: keyboardModel.isKeyboardVisible

    x: keyboardController.mainAppWindow ? keyboardController.mainAppWindow.x : 0
    y: keyboardController.mainAppWindow ? keyboardController.mainAppWindow.y : 0
    width: keyboardController.mainAppWindow ? keyboardController.mainAppWindow.width : 1280
    height: keyboardController.mainAppWindow ? keyboardController.mainAppWindow.height : 240
    title: qsTr("Virtual Keyboard")
    flags: Qt.FramelessWindowHint

    color: "lightgray"

    Keyboard  {
        id: kb
        width: mainWindow.width
        height: mainWindow.height
        z: 2

        Component.onCompleted: {
            showKeyboard()
        }
    }

    function showKeyboard(){
        if(!kb.layout){
            var comp = Qt.createComponent(keyboardModel.currentLayoutPath)
            kb.layout = comp.createObject(kb)
            kb.layout.visible = true
        }
    }

    Connections {
        target: keyboardModel
        onCurrentLayoutPathChanged : {
            var comp = Qt.createComponent(keyboardModel.currentLayoutPath)
            kb.layout = comp.createObject(kb)
            kb.layout.visible = true
        }
    }
}
