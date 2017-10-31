#include "Key.h"
#include <QQmlEngine>

Key::Key(QQuickItem *parent) : KeyboardElement(ET_KEY, parent)
{
    QQmlEngine::setObjectOwnership(this, QQmlEngine::CppOwnership);
}

int Key::currentCol() const
{
    return m_currentCol;
}

void Key::setCurrentCol(int currentCol)
{
    m_currentCol = currentCol;
}

int Key::currentRow() const
{
    return m_currentRow;
}

void Key::setCurrentRow(int currentRow)
{
    m_currentRow = currentRow;
}
