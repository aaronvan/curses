#include <ncurses.h>
#include <stdlib.h>

int main(void) {
    int age = 57;
    int number = 88;

    initscr();
    printw("I am %d years old\n", age);
    printw("I really like %d. It is my favorite.", number);
    refresh();
    getch();

    endwin();
    return EXIT_SUCCESS;
}
