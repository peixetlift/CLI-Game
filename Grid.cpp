#include "Grid.h"
#include <iostream>
#include <chrono>
#include <thread>

Grid::Grid() {
    int terminalWidth = getNumberOfTerminalColumns() - 10;
    int terminalHeight = getNumberOfTerminalRows() - 10;
    std::vector<char> dummyVector;  
    //initialize all grid positions to blank space
    for(int i = 0; i < terminalHeight; i++)  {
        for(int j = 0; j < terminalWidth ; j++) {
            dummyVector.push_back(' ');
        }
        this->gameGrid.push_back(dummyVector);
        dummyVector.clear();
    }
}

Grid::~Grid() {
    std::cout << "Game ended" << std::endl;
}

char Grid::getAt(Point point) {
    return this->gameGrid[point.y][point.x];
}

void Grid::setAt(Point point, char value) {
    this->gameGrid[point.y][point.x] = value;
}

void Grid::clearAt(Point point) {
    this->gameGrid[point.y][point.x] = ' ';
}

void Grid::printGrid() {
    int terminalWidth = gameGrid[0].size();
    int terminalHeight = gameGrid.size();
    for(int i = 0; i < terminalHeight ; i++)  {
        for(int j = 0; j < terminalWidth ; j++) {
            std::cout << gameGrid[i][j]; 
        }
        std::cout << std::endl;
    }
}

void Grid::refresh(int speed) {
    using namespace std::chrono_literals;
    speed = (!speed) ? 5 : speed;
    clearScreen();
    printGrid();
    std::this_thread::sleep_for(100ms/speed);
}

void Grid::refresh() {
    this->refresh(5);
}
