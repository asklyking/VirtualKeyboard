#ifndef KEYBOARDMODEL_H
#define KEYBOARDMODEL_H

#include <QObject>

#include "Constants.h"

class KeyboardModel : public QObject
{
        Q_OBJECT
        Q_PROPERTY(QString currentLayoutPath READ currentLayoutPath WRITE setCurrentLayoutPath NOTIFY isCurrentLayoutPathChanged)
        Q_PROPERTY(bool isShiftMode READ isShiftMode WRITE setIsShiftMode NOTIFY isShiftModeChanged)
        Q_PROPERTY(bool isKeyboardVisible READ isKeyboardVisible WRITE setIsKeyboardVisible NOTIFY isKeyboardVisibleChanged)
    public:
        explicit KeyboardModel(QObject *parent = nullptr);

        QString currentLayoutPath() const;
        void setCurrentLayoutPath(const QString &currentLayoutPath);

        bool isShiftMode() const;
        void setIsShiftMode(bool isShiftMode);

        bool isKeyboardVisible() const;
        void setIsKeyboardVisible(bool isKeyboardVisible);

    signals:
        void isCurrentLayoutPathChanged();
        void isShiftModeChanged();
        void isKeyboardVisibleChanged();

    public slots:
        void changeModeKeyboard();
        void changePageKeyboard();

    private:
        QString m_currentLayoutPath;
        bool m_isShiftMode;
        bool m_isKeyboardVisible;
};

#endif // KEYBOARDMODEL_H
