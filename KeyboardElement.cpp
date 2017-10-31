#include "KeyboardElement.h"
#include <QQmlEngine>

KeyboardElement::KeyboardElement(QQuickItem* parent) : KeyboardElement(ET_ELEMENT, parent)
{
    QQmlEngine::setObjectOwnership(this, QQmlEngine::CppOwnership);
}

KeyboardElement::KeyboardElement(ElementType elementType, QQuickItem *parent) :
    QQuickItem(parent),
    m_elementType(elementType),
    m_span(1),
    m_subSpan(0)
{
    QQmlEngine::setObjectOwnership(this, QQmlEngine::CppOwnership);
}

qreal KeyboardElement::span() const
{
    return m_span;
}

void KeyboardElement::setSpan(const qreal &span)
{
    m_span = span;
}

qreal KeyboardElement::subSpan() const
{
    return m_subSpan;
}

void KeyboardElement::setSubSpan(const qreal &subSpan)
{
    m_subSpan = subSpan;
}

ElementType KeyboardElement::elementType() const
{
    return m_elementType;
}

void KeyboardElement::setElementType(const ElementType &elementType)
{
    m_elementType = elementType;
}
