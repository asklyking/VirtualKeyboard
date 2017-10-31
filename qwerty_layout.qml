import QtQuick 2.0
import Keys 1.0

import "components"

KeyboardColumn {
    id: kbLayout

    KeyboardRow {
        CharacterKey { text: 'q'; shiftText: 'Q'; currentCol: 0; currentRow: 0 }
        CharacterKey { text: 'w'; shiftText: 'W'; currentCol: 0; currentRow: 1 }
        CharacterKey { text: 'e'; shiftText: 'E'; currentCol: 0; currentRow: 2 }
        CharacterKey { text: 'r'; shiftText: 'R'; currentCol: 0; currentRow: 3 }
        CharacterKey { text: 't'; shiftText: 'T'; currentCol: 0; currentRow: 4 }
        CharacterKey { text: 'y'; shiftText: 'Y'; currentCol: 0; currentRow: 5 }
        CharacterKey { text: 'u'; shiftText: 'U'; currentCol: 0; currentRow: 6 }
        CharacterKey { text: 'i'; shiftText: 'I'; currentCol: 0; currentRow: 7 }
        CharacterKey { text: 'o'; shiftText: 'O'; currentCol: 0; currentRow: 8 }
        CharacterKey { text: 'p'; shiftText: 'P'; currentCol: 0; currentRow: 9 }
    }

    KeyboardRow {
        CharacterKey { text: 'a'; shiftText: 'A'; currentCol: 1; currentRow: 0 }
        CharacterKey { text: 's'; shiftText: 'S'; currentCol: 1; currentRow: 1 }
        CharacterKey { text: 'd'; shiftText: 'D'; currentCol: 1; currentRow: 2 }
        CharacterKey { text: 'f'; shiftText: 'F'; currentCol: 1; currentRow: 3 }
        CharacterKey { text: 'g'; shiftText: 'G'; currentCol: 1; currentRow: 4 }
        CharacterKey { text: 'h'; shiftText: 'H'; currentCol: 1; currentRow: 5 }
        CharacterKey { text: 'j'; shiftText: 'U'; currentCol: 1; currentRow: 6 }
        CharacterKey { text: 'k'; shiftText: 'K'; currentCol: 1; currentRow: 7 }
        CharacterKey { text: 'l'; shiftText: 'L'; currentCol: 1; currentRow: 8 }
        CharacterKey { text: '-'; shiftText: '-'; currentCol: 1; currentRow: 9 }
    }

    KeyboardRow {
        ShiftKey { text: 'Shift'; currentCol: 2; currentRow: 0 }
        CharacterKey { text: '\''; currentCol: 2; currentRow: 1 }
        CharacterKey { text: 'z'; shiftText: 'Z'; currentCol: 2; currentRow: 2 }
        CharacterKey { text: 'x'; shiftText: 'X'; currentCol: 2; currentRow: 3 }
        CharacterKey { text: 'c'; shiftText: 'C'; currentCol: 2; currentRow: 4 }
        CharacterKey { text: 'v'; shiftText: 'V'; currentCol: 2; currentRow: 5 }
        CharacterKey { text: 'b'; shiftText: 'B'; currentCol: 2; currentRow: 6 }
        CharacterKey { text: 'n'; shiftText: 'N'; currentCol: 2; currentRow: 7 }
        CharacterKey { text: 'm'; shiftText: 'M'; currentCol: 2; currentRow: 8 }
        BackspaceKey { text: 'Backspace'; currentCol: 2; currentRow: 9 }
    }

    KeyboardRow {
        ModeKey { text: '123#'; shiftText: '123#'; currentCol: 3; currentRow: 0 }
        CharacterKey { text: ','; shiftText: ','; currentCol: 3; currentRow: 1 }
        CharacterKey { text: '-'; currentCol: 3; currentRow: 2 }
        SpaceKey { text: 'Space'; span: 4 ; currentCol: 3; currentRow: 3}
        CharacterKey { text: 'Settings'; currentCol: 3; currentRow: 7 }
        DoneKey { text: 'Enter'; span: 2; currentCol: 3; currentRow: 8}
    }
}
