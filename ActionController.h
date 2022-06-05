#ifndef ACTIONCONTROLLERH
#define ACTIONCONTROLLERH 
#include <iostream>
#include "Fighter.h"
class ActionController {
    public:
        ActionController(Fighter* fighter);
        ~ActionController();
        void moveWithWASD(char keypress); 
        void shootProjectile(char keypress); 
        void runControls(char keypress);
    private:
        Fighter* fighter;
};
#endif
