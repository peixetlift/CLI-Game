#include <iostream>
#include "Wizard.h"
#include "Grid.h"

int main() {
    std::cout << "[Main] starting" << std::endl;
    Grid* grid = new Grid();
    Wizard* wiz = new Wizard(grid);

    Point position {0, 0};

    while (position.x < 30) {
        wiz->move(position);
        position.x++;
        position.y++;
        grid->refresh();
    }
    wiz->shoot();

    delete grid;
    delete wiz;
    return 0;
}

