#include "MovementController.h"

void moveWithWASD(Fighter& fighter) {
    char keypress;
    keypress = std::getchar(); 
    
    Point position = fighter.getPosition();
    switch(keypress) {
        case 'w':
        case 'W':
            position.y++;
            fighter.move(position);
            break;
        case 'a':
        case 'A':
            position.x--;
            fighter.move(position);
            break;
        case 's':
        case 'S':
            position.y--;
            fighter.move(position);
            break;
        case 'd':
        case 'D':
            position.x++;
            fighter.move(position);
            break;
    }
}
