#include "Keyboard.h"
#include <QQmlEngine>

Keyboard::Keyboard(QQuickItem *parent) :
    QQuickItem(parent),
    m_spacing(7),
    m_subSpacing(1),
    m_layout(nullptr)
{
    QQmlEngine::setObjectOwnership(this, QQmlEngine::CppOwnership);

    connect(this, &Keyboard::isSpacingChanged, this, &Keyboard::polish);
    connect(this, &Keyboard::isSubSpacingChanged, this, &Keyboard::polish);
    connect(this, &Keyboard::isLayoutChanged, this, &Keyboard::polish);
}

int Keyboard::spacing() const
{
    return m_spacing;
}

void Keyboard::setSpacing(int spacing)
{
    m_spacing = spacing;
    emit isSpacingChanged();
}

int Keyboard::subSpacing() const
{
    return m_subSpacing;
}

void Keyboard::setSubSpacing(int subSpacing)
{
    m_subSpacing = subSpacing;
    emit isSubSpacingChanged();
}

KeyboardElement *Keyboard::layout() const
{
    return m_layout;
}

void Keyboard::setLayout(KeyboardElement *layout)
{
    clearLayout();

    m_layout = layout;

    m_layout->setWidth(this->width());
    m_layout->setHeight(this->height());

    scanLayout(m_layout);
    emit isLayoutChanged();
}

void Keyboard::clearLayout()
{
    if(m_layout){
        delete m_layout;
        m_layout = nullptr;
    }
}

void Keyboard::scanLayout(const KeyboardElement *e)
{
    switch (e->elementType()) {
        case ET_ELEMENT:
            scanElement(qobject_cast<const KeyboardElement *>(e));
            break;
        case ET_COLUMN:
            scanColumn(qobject_cast<const KeyboardColumn *>(e));
            break;
        case ET_ROW:
            scanRow(qobject_cast<const KeyboardRow *>(e));
            break;
        default:
            break;
    }
}

void Keyboard::scanColumn(const KeyboardColumn *col)
{
    for(int i =0; i < col->childItems().count(); i++){
        KeyboardRow *child = qobject_cast<KeyboardRow *>(col->childItems().at(i));
        child->setY(i * col->height()/col->childItems().count());
        child->setWidth(col->width());
        child->setHeight(col->height()/col->childItems().count());
        scanRow(child);
    }
}

void Keyboard::scanRow(const KeyboardRow *row)
{
    for(int i =0; i < row->childItems().count(); i++){
        Key *child = qobject_cast<Key *>(row->childItems().at(i));
        child->setX(child->currentRow() * row->width()/countSpans(row));
        child->setWidth(child->span() * row->width() / countSpans(row));
        child->setHeight(row->height());
    }
}

void Keyboard::scanElement(const KeyboardElement *e)
{
    Q_UNUSED(e)
}

int Keyboard::countSpans(const KeyboardElement *e)
{
    int countSpan = 0;
    for(int i =0; i < e->childItems().count(); i++){
        KeyboardElement *child = qobject_cast<KeyboardElement *>(e->childItems().at(i));
        countSpan += child->span();
    }
    return countSpan;
}
