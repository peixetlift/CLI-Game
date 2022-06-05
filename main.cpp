#include <iostream>
#include "Wizard.h"
#include "Grid.h"
#include "ActionController.h"

int main() {
    std::cout << "[Main] starting" << std::endl;
    Grid* grid = new Grid();
    Wizard* wiz = new Wizard(grid);
    ActionController* wizController = new ActionController(wiz);

    char keypress = '0';
    Point position {0, 0};

    grid->refresh();
    while(keypress != 'q' && keypress != 'Q') {
        keypress = getCharFromKeyboard();
        wizController->runControls(keypress);
        grid->refresh();
    }

    clearScreen();

    delete grid;
    delete wiz;
    return 0;
}

