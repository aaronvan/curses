#include <ncurses.h>
#include <stdlib.h>

int main(void) {
    char t1[] = "What is the sign of Deede? It is";
    char t2[] = " the sign of the Bull.";

    initscr();
    addstr(t1);
    addstr(t2);
    move(2, 0);
    addstr("Thou art the Taurus of the Age.");
    refresh();
    getch();

    endwin();
    return EXIT_SUCCESS;
}
