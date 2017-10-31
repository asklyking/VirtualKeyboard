#ifndef KEYBOARDCOLUMN_H
#define KEYBOARDCOLUMN_H

#include "KeyboardElement.h"

class KeyboardColumn : public KeyboardElement
{
        Q_OBJECT
    public:
        KeyboardColumn(QQuickItem *parent = 0);
};

#endif // KEYBOARDCOLUMN_H
