#include <ncurses.h>
#include <stdlib.h>

int main(void) {
    char first[] = "My name is:";
    char second[] = " Aaron the Hero.";

    initscr();
    addstr(first);
    addstr(second);
    addch('\n');
    printw("This is \"printw()\" command.\n");
    refresh();
    getch();

    endwin();
    return EXIT_SUCCESS;
}
