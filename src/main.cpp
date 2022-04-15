#include <ncurses.h>
#include <unistd.h>

#include <iostream>

#include "ttg.hpp"

using std::string;

void setup();
void exit_game(const int code, const string msg);

int main(int argc, char **argv) {
    (void)argc, (void)argv;
    setup();
    int rows, cols;
    getmaxyx(stdscr, rows, cols);
    if (rows <= 0 || cols <= 0)
        exit_game(1, "terminal size cannot be less than or equal to 0");
    init_map(rows, cols);
    play();
    exit_game(0, "");
}

void setup() {
    initscr();
    noecho();
    keypad(stdscr, true);
    raw();
    curs_set(0);
    halfdelay(1);
    if (!has_colors()) exit_game(1, "your terminal does not support colors");
    use_default_colors();
    start_color();
}

void exit_game(const int code, const string msg) {
    endwin();
    if (msg.size() <= 0) exit(code);
    if (code == 0)
        std::cout << msg << std::endl;
    else
        std::cerr << "Error: " << msg << std::endl;
    exit(code);
}

