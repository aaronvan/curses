#include <ncurses.h>
#include <stdlib.h>

int main(void) {
    char text[] = "Hello, Deede my love!";
    char *ptr;

    initscr();
    ptr = text;

    while (*ptr) {
	addch(*ptr);
	ptr++;
	refresh();
	napms(200);
    }

    getch();
    endwin();

    return EXIT_SUCCESS;
}
