#ifndef PROJECTILEH
#define PROJECTILEH

class Projectile {
    public :
        virtual void setSpeed(int speed) = 0;
        virtual int getSpeed() = 0;
};

#endif
