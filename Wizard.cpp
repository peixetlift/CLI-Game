#include <iostream>
#include "Wizard.h"

Wizard::Wizard(Grid* grid) { 
    this->icon = 'W';
    this->grid = grid;
    this->position.x = 0;
    this->position.y = 0;
    this->fire = new Fire();
    std::cout << "[Wizard] Wizard spawned" << std::endl;
}

Wizard::~Wizard() { 
    std::cout << "[Wizard] Wizard left the arena" << std::endl;
}


void Wizard::attack() {
    std::cout << "[Wizard] Wizard attacked" << std::endl;
}

void Wizard::defend() {
    std::cout << "[Wizard] Wizard defended" << std::endl;
}

void Wizard::setPosition(Point point) {
    this->grid->clearAt(this->position);
    this->position.x = point.x;
    this->position.y = point.y;
}

Point Wizard::getPosition() {
    return this->position;
}

void Wizard::move(Point point) {
    this->grid->clearAt(point);
    this->setPosition(point);
    this->grid->setAt(this->position, this->icon);
}

void Wizard::shoot() {
    this->fire->setSpeed(2);
    int numberOfColumns = getNumberOfTerminalColumns();
    Point firePosition = this->position;
    int distanceToTravel = (numberOfColumns - firePosition.x) / 2;
    for(; firePosition.x + distanceToTravel < numberOfColumns; firePosition.x++) {
        this->grid->setAt(firePosition, this->fire->getIcon());
        this->grid->refresh(this->fire->getSpeed());
        this->grid->clearAt(firePosition);
    }
}


void Wizard::setProjectile(Projectile* projectile) {
    this->fire = (Fire*) projectile;
}

Projectile* Wizard::getProjectile() {
    return this->fire;
}
