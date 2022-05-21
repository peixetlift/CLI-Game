#ifndef FIGHTERH
#define FIGHTERH

#include "Projectile.h"

class Fighter {
public :
        virtual void attack() = 0;
        virtual void defend() = 0;
        virtual void setProjectile(Projectile* projectile) = 0;
        virtual Projectile* getProjectile() = 0;
};

#endif
