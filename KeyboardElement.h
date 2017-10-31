#ifndef KEYBOARDELEMENT_H
#define KEYBOARDELEMENT_H

#include <QQuickItem>

enum ElementType
{
    ET_ELEMENT,
    ET_COLUMN,
    ET_ROW,
    ET_KEY
};



class KeyboardElement : public QQuickItem
{
        Q_OBJECT
        Q_PROPERTY(qreal span READ span WRITE setSpan)
        Q_PROPERTY(qreal subSpan READ subSpan WRITE setSubSpan)
    public:
        KeyboardElement(QQuickItem* parent = 0);
        KeyboardElement(ElementType elementType, QQuickItem *parent = 0);

        qreal span() const;
        void setSpan(const qreal &span);

        qreal subSpan() const;
        void setSubSpan(const qreal &subSpan);

        ElementType elementType() const;
        void setElementType(const ElementType &elementType);

    signals:

    public slots:

    private:
        ElementType m_elementType;
        qreal m_span;
        qreal m_subSpan;
};

#endif // KEYBOARDELEMENT_H
