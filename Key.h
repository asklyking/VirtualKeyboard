#ifndef KEY_H
#define KEY_H

#include "KeyboardElement.h"

class Key : public KeyboardElement
{
        Q_OBJECT
        Q_PROPERTY(int currentRow READ currentRow WRITE setCurrentRow NOTIFY currentRowChanged)
        Q_PROPERTY(int currentCol READ currentCol WRITE setCurrentCol NOTIFY currentColChanged)
    public:
        Key(QQuickItem *parent = 0);

        int currentCol() const;
        void setCurrentCol(int currentCol);

        int currentRow() const;
        void setCurrentRow(int currentRow);

    signals:
        void currentRowChanged();
        void currentColChanged();

    private:
        int m_currentCol;
        int m_currentRow;
};

#endif // KEY_H
