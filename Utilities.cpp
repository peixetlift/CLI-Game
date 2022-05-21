#include <iostream>
#include <sys/ioctl.h>
#include <unistd.h>


void clearScreen() {
    std::system("clear");
}

int getNumberOfTerminalColumns() {
    struct winsize w;
    //retrieve number of columns
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
    return w.ws_col;
}

int getNumberOfTerminalRows() {
    struct winsize w;
    //retrieve number of columns
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
    return w.ws_row;
}
