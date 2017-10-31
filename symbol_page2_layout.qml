import QtQuick 2.0
import Keys 1.0

import "components"

KeyboardColumn {
    id: kbLayout

    KeyboardRow {
        CharacterKey { text: '[' ;currentCol:0 ; currentRow:0}
        CharacterKey { text: ']' ;currentCol:0 ; currentRow:1}
        CharacterKey { text: '{' ;currentCol:0 ; currentRow:2}
        CharacterKey { text: '}' ;currentCol:0 ; currentRow:3}
        CharacterKey { text: '#' ;currentCol:0 ; currentRow:4}
        CharacterKey { text: '%' ;currentCol:0 ; currentRow:5}
        CharacterKey { text: '^' ;currentCol:0 ; currentRow:6}
        CharacterKey { text: '*' ;currentCol:0 ; currentRow:7}
        CharacterKey { text: '+' ;currentCol:0 ; currentRow:8}
        CharacterKey { text: '=' ;currentCol:0 ; currentRow:9}
    }

    KeyboardRow {
        CharacterKey { text: '|' ;currentCol:1 ; currentRow:0}
        CharacterKey { text: '~' ;currentCol:1 ; currentRow:1}
        CharacterKey { text: '<' ;currentCol:1 ; currentRow:2}
        CharacterKey { text: '>' ;currentCol:1 ; currentRow:3}
        CharacterKey { text: '₩' ;currentCol:1 ; currentRow:4}
        CharacterKey { text: '€' ;currentCol:1 ; currentRow:5}
        CharacterKey { text: '¥' ;currentCol:1 ; currentRow:6}
        CharacterKey { text: '°' ;currentCol:1 ; currentRow:7}
        CharacterKey { text: '.' ;currentCol:1 ; currentRow:8}
        CharacterKey { text: '℃';currentCol:1 ; currentRow:9}
    }

    KeyboardRow {
        PageKey { text: '2/2>'; z : 2; currentCol: 2; currentRow: 0 }
        CharacterKey { text: '℉';currentCol:2 ; currentRow:1}
        CharacterKey { text: '¢' ;currentCol:2 ; currentRow:2}
        CharacterKey { text: '£' ;currentCol:2 ; currentRow:3}
        CharacterKey { text: '¤' ;currentCol:2 ; currentRow:4}
        CharacterKey { text: '§' ;currentCol:2 ; currentRow:5}
        CharacterKey { text: '' ;currentCol:2 ; currentRow:6}
        CharacterKey { text: '' ;currentCol:2 ; currentRow:7}
        CharacterKey { text: '' ;currentCol:2 ; currentRow:8}
        CharacterKey { text: 'Backspace'; currentCol: 2; currentRow: 9 }
    }

    KeyboardRow {
        ModeKey { text: 'A..Z'; shiftText: 'A..Z'; currentCol: 3; currentRow: 0 }
        CharacterKey { text: ','; shiftText: ','; currentCol: 3; currentRow: 1 }
        CharacterKey { text: '-'; currentCol: 3; currentRow: 2 }
        SpaceKey { text: 'Space'; span: 4 ; currentCol: 3; currentRow: 3}
        CharacterKey { text: 'Settings'; shiftText: '-'; currentCol: 3; currentRow: 7 }
        DoneKey { text: 'Enter'; span: 2; currentCol: 3; currentRow: 8}
    }
}
