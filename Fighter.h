#ifndef FIGHTERH
#define FIGHTERH

#include "Projectile.h"
#include "Utilities.h"

class Fighter {
public :
        virtual void attack() = 0;
        virtual void defend() = 0;
        virtual void setPosition(Point point) = 0;
        virtual Point getPosition() = 0;
        virtual void move(Point point) = 0;
        virtual void setProjectile(Projectile* projectile) = 0;
        virtual Projectile* getProjectile() = 0;
};
#endif
