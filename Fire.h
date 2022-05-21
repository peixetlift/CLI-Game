#ifndef FIREH
#define FIREH

#include "Projectile.h"

class Fire : public Projectile {
    public :
        Fire();
        ~Fire();
        void setSpeed(int);
        int getSpeed();
        char getIcon();
    private :
        char icon;
        int speed;
};

#endif
