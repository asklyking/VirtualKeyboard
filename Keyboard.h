#ifndef KEYBOARD_H
#define KEYBOARD_H

#include <QQuickItem>
#include "KeyboardElement.h"
#include "KeyboardColumn.h"
#include "KeyboardRow.h"
#include "Key.h"

struct block_t
{
    int spacing;
    int subSpacing;
    qreal uw;
    qreal uh;
};

class Keyboard : public QQuickItem
{
        Q_OBJECT
        Q_PROPERTY(int spacing READ spacing WRITE setSpacing NOTIFY isSpacingChanged)
        Q_PROPERTY(int subSpacing READ subSpacing WRITE setSubSpacing NOTIFY isSubSpacingChanged)
        Q_PROPERTY(KeyboardElement* layout READ layout WRITE setLayout NOTIFY isLayoutChanged)
    public:
        Keyboard(QQuickItem *parent = 0);

        int spacing() const;
        void setSpacing(int spacing);

        int subSpacing() const;
        void setSubSpacing(int subSpacing);

        KeyboardElement *layout() const;
        void setLayout(KeyboardElement *layout);

    signals:
        void isSpacingChanged();
        void isSubSpacingChanged();
        void isLayoutChanged();

    public slots:
        void clearLayout();
    private:
        int m_spacing;
        int m_subSpacing;
        KeyboardElement *m_layout;
        int m_countRow;
        int m_countCol;
        QString m_currentChoosenTxt;

        void scanLayout(const KeyboardElement *e);
        void scanColumn(const KeyboardColumn *col);
        void scanRow(const KeyboardRow *row);
        void scanElement(const KeyboardElement *e);
        int countSpans(const KeyboardElement *e);
};

#endif // KEYBOARD_H
