#include "Fire.h"
#include "Utilities.h"
#include <iostream>
#include <chrono>
#include <thread>

Fire::Fire() {
    icon ='*';
    speed = 0;
}

Fire::~Fire() {
}

void Fire::setSpeed(int speed) {
    this->speed = speed;
}

int Fire::getSpeed() {
    return this->speed;
}

char Fire::getIcon() {
    return this->icon;
}
