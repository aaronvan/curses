#include <ncurses.h>
#include <stdlib.h>

int main(void) {
    char first[16];
    char last[32];

    initscr();
    addstr("What is your first name? ");
    refresh();
    getnstr(first, 15);

    addstr("What is your last name? ");
    refresh();
    getnstr(last, 31);

    printw("Hello, %s %s!", first, last);
    refresh();
    getch();

    endwin();

    return EXIT_SUCCESS;
}

