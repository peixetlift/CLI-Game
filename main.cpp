#include <iostream>
#include "Wizard.h"
#include "Grid.h"
#include "MovementController.h"

int main() {
    std::cout << "[Main] starting" << std::endl;
    Grid* grid = new Grid();
    Wizard* wiz = new Wizard(grid);

    Point position {0, 0};

    moveWithWASD((*wiz));

    delete grid;
    delete wiz;
    return 0;
}

