#include "KeyboardRow.h"
#include <QQmlEngine>

KeyboardRow::KeyboardRow(QQuickItem *parent) : KeyboardElement(ET_ROW, parent)
{
    QQmlEngine::setObjectOwnership(this, QQmlEngine::CppOwnership);
}
