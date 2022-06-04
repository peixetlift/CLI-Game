#include "MovementController.h"
#include "Utilities.h"

char getCharFromKeyboard() {
    char input;
    system("stty raw");
    input = getchar();
    system("stty cooked");
    return input;
}

void moveWithWASD(Fighter& fighter) {
    int keypress;
    keypress = getCharFromKeyboard();
    Point position = fighter.getPosition();
    switch(keypress) {
        case 'w':
        case 'W':
            if(position.y)
                position.y--;
            fighter.move(position);
            break;
        case 'a':
        case 'A':
            if(position.x)
                position.x--;
            fighter.move(position);
            break;
        case 's':
        case 'S':
            if(position.y < getNumberOfTerminalRows()-15)
                position.y++;
            fighter.move(position);
            break;
        case 'd':
        case 'D':
            if(position.x < getNumberOfTerminalColumns()-15)
                position.x++;
            fighter.move(position);
            break;
    }
}

