#ifndef KEYBOARDROW_H
#define KEYBOARDROW_H

#include "KeyboardElement.h"

class KeyboardRow : public KeyboardElement
{
        Q_OBJECT
    public:
        KeyboardRow(QQuickItem *parent = 0);
};

#endif // KEYBOARDROW_H
