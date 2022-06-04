#ifndef WIZARDH
#define WIZARDH
#include "Fighter.h"
#include "Fire.h"
#include "Grid.h"
#include "Utilities.h"

class Wizard : public Fighter {
public :
    Wizard(Grid* grid);
    ~Wizard();
    void attack();
    void defend();
    void setPosition(Point point);
    Point getPosition();
    void move(Point point);
    void shoot();
    void setProjectile(Projectile* projectile);
    Projectile* getProjectile();
private :
    char icon;
    Fire* fire;
    Grid* grid;
    Point position;
};

#endif
