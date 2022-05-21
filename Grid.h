#ifndef GRIDH
#define GRIDH
#include <vector>
#include "Utilities.h"

class Grid {
    public :
        Grid();
        ~Grid();
        char getAt(Point point);
        void setAt(Point point, char value);
        void clearAt(Point point);
        void printGrid();
        void refresh();
        void refresh(int speed);
    private :
        std::vector<std::vector<char>> gameGrid;
};
#endif
