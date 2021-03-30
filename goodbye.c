#include <ncurses.h>
#include <stdlib.h>

int main(void) {
    initscr();
    addstr("This is ncurses.");
    refresh();
    getch();

    endwin();

    return EXIT_SUCCESS;
}
