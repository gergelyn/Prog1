#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
#include <unistd.h>

int main(void)
{

    WINDOW *screen;
    // initscr() function is belongs to curses.h library (ncurses)
    // We are using it to determine the terminal's type and to initialize all curses data structures
    screen = initscr();
    // noecho() function belongs to curses.h library
    noecho();
    // cbreak() function belongs to curses.h library
    cbreak();
    // nodelay() function belongs to curses.h library
    nodelay(screen, true);

    int xj = 0;
    int xk = 0;
    int yj = 0;
    int yk = 0;

    int mx = 160;
    int my = 48;

    for (;;)
    {
        xj = (xj - 1) % mx;
        xk = (xk + 1) % mx;
        yj = (yj - 1) % my;
        yk = (yk + 1) % my;
        // clear() function is belongs to curses.h library (ncurses)
        // We are using it to clear the terminal's screen
        clear();
        mvprintw(abs((yj + (my - yk)) / 2), abs((xj + (mx - xk)) / 2), "O");
        // refresh() function is belongs to curses.h library (ncurses)
        // We are using it to get the actual output to the terminal
        refresh();
        // usleep() function is belongs to unistd.h libray
        // usleep(100000) is suspending the execution for 100000ms(=100s=1m40s) intervals
        usleep(100000);
    }

    return 0;
}