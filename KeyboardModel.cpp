#include "KeyboardModel.h"

#include <QDebug>

KeyboardModel::KeyboardModel(QObject *parent) : QObject(parent),
    m_currentLayoutPath(str_qwerty_path),
    m_isShiftMode(false),
    m_isKeyboardVisible(true)
{

}

QString KeyboardModel::currentLayoutPath() const
{
    return m_currentLayoutPath;
}

void KeyboardModel::setCurrentLayoutPath(const QString &currentLayoutPath)
{
    m_currentLayoutPath = currentLayoutPath;
    emit isCurrentLayoutPathChanged();
}


void KeyboardModel::changeModeKeyboard()
{
    if(currentLayoutPath() == str_qwerty_path){
        setCurrentLayoutPath(str_symbol_page1_layout);
    } else {
        setCurrentLayoutPath(str_qwerty_path);
    }
}

void KeyboardModel::changePageKeyboard()
{
    if(currentLayoutPath() == str_symbol_page1_layout){
        setCurrentLayoutPath(str_symbol_page2_layout);
    } else {
        setCurrentLayoutPath(str_symbol_page1_layout);
    }
}

bool KeyboardModel::isKeyboardVisible() const
{
    return m_isKeyboardVisible;
}

void KeyboardModel::setIsKeyboardVisible(bool isKeyboardVisible)
{
    m_isKeyboardVisible = isKeyboardVisible;
    emit isKeyboardVisibleChanged();
}

bool KeyboardModel::isShiftMode() const
{
    return m_isShiftMode;
}

void KeyboardModel::setIsShiftMode(bool isShiftMode)
{
    m_isShiftMode = isShiftMode;
    emit isShiftModeChanged();
}
