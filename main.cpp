#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include "KeyboardController.h"
#include "KeyboardModel.h"
#include "Key.h"
#include "Keyboard.h"
#include "KeyboardColumn.h"
#include "KeyboardElement.h"
#include "KeyboardRow.h"

#define REG_TYPE(T) qmlRegisterType<T>("Keys", 1, 0, #T)

void registerTypes()
{
    REG_TYPE(Keyboard);
    REG_TYPE(KeyboardElement);
    REG_TYPE(KeyboardRow);
    REG_TYPE(KeyboardColumn);
    REG_TYPE(Key);
}

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    registerTypes();

    KeyboardController keyboardController(&engine);

    engine.rootContext()->setContextProperty("keyboardController",&keyboardController);

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

//    QObject *rootObject = engine.rootObjects().first();

    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
