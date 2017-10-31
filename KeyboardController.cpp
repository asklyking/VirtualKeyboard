#include "KeyboardController.h"

KeyboardController::KeyboardController(QQmlApplicationEngine *engine,QObject *parent) :
    QObject(parent),
    m_mainAppWindow(nullptr)
{
    if(engine){
        m_engine = engine;
    }

    m_engine->rootContext()->setContextProperty("keyboardModel",&keyboardModel);
}

QObject *KeyboardController::mainAppWindow() const
{
    return m_mainAppWindow;
}

void KeyboardController::setMainAppWindow(QObject *mainAppWindow)
{
    m_mainAppWindow = mainAppWindow;
    emit isMainAppWindowChanged();
}

