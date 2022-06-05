#include "ActionController.h"
#include "Utilities.h"

ActionController::ActionController(Fighter* fighter){
    this->fighter = fighter;
}

ActionController::~ActionController(){}

void ActionController::runControls(char keypress){
    this->shootProjectile(keypress);
    this->moveWithWASD(keypress);
}

void ActionController::moveWithWASD(char keypress) {
    Point position = this->fighter->getPosition();
    switch(keypress) {
        case 'w':
        case 'W':
            if(position.y)
                position.y--;
            fighter->move(position);
            break;
        case 'a':
        case 'A':
            if(position.x)
                position.x--;
            fighter->move(position);
            break;
        case 's':
        case 'S':
            if(position.y < getNumberOfTerminalRows()-15)
                position.y++;
            fighter->move(position);
            break;
        case 'd':
        case 'D':
            if(position.x < getNumberOfTerminalColumns()-15)
                position.x++;
            fighter->move(position);
            break;
        default:
            break;
    }
}

void ActionController::shootProjectile(char keypress) {
    if(keypress == ' ' || keypress == ' ')
        this->fighter->attack();
}

