#include <stdio.h>
#include <curses.h>

int main() {
    initscr() ;		/* turn on curses	*/

    /* send requests	*/
    clear();			/* clear screen	*/
    move(10,20);			/* row10,col20	*/
    addstr("Hello, world");		/* add a string	*/
    move(LINES-1,0);		/* move to LL	*/

    refresh();		/* update the screen	*/
    getch();		/* wait for user input	*/

    endwin();		/* turn off curses	*/
}