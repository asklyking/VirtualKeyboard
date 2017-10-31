#ifndef KEYBOARDCONTROLLER_H
#define KEYBOARDCONTROLLER_H

#include <QObject>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include "KeyboardModel.h"

class KeyboardController : public QObject
{
        Q_OBJECT
        Q_PROPERTY(QObject* mainAppWindow READ mainAppWindow WRITE setMainAppWindow NOTIFY isMainAppWindowChanged)
    public:
        explicit KeyboardController(QQmlApplicationEngine *engine,QObject *parent = 0);

        QObject *mainAppWindow() const;
        void setMainAppWindow(QObject *mainAppWindow);

    signals:
        void isMainAppWindowChanged();

    public slots:

    private:
        QQmlApplicationEngine *m_engine;
        KeyboardModel keyboardModel;
        QObject *m_mainAppWindow;
};

#endif // KEYBOARDCONTROLLER_H
