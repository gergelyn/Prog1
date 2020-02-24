#include <iostream>
#include <cmath>
#include <ncurses.h>
#include <unistd.h>
#include <curses.h>

using namespace std;

int main()
{
    int xj = 0, xk = 0, yj = 0, yk = 0;
    int mx = 80 * 2, my = 24 * 2;

    WINDOW *myScreen;
    myScreen = initscr();
    noecho();
    cbreak();
    nodelay(myScreen, true);

    for (;;)
    {
        xj = (xj - 1) % mx;
        xk = (xk + 1) % mx;
        yj = (yj - 1) % my;
        yk = (yk + 1) % my;

        clear();
        mvprintw(0, 0, "--------------------------------------------------------------------------------");
        mvprintw(abs((yj + (my - yk)) / 2), abs((xj + (mx - xk)) / 2), "X");
        mvprintw(24, 0, "--------------------------------------------------------------------------------");
        refresh();
        usleep(20000);
    }
    return 0;
}