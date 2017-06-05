#include <stdlib.h>
#include <cab202_graphics.h>
#include <cab202_timers.h>

//  (a) Declare four global integer variables, as follows:
//      x - the horizontal location of the left edge of the rectangle
//      y - the vertical location of the top edge of the rectangle
//      w - the width of the rectangle.
//      h - the height of the rectangle.
int x, y, w, h;

//  (b) Declare a global variable of type char called c.
//      This is the character that is to be used to render the rectangle.
char c;

void draw_rect(void) {
    //  (c) Insert code to draw the outline of the rectangle defined by the global variables.
    //      If either of the width or height is less than or equal to zero,
    //      the function must not draw anything.
    int flag = 1;
    if ( w < 0 || w == 0 ){
      flag = 0;
    }

    if ( h < 0 || h == 0 ){
      flag = 0;
    }
    
    if (flag == 1) {
     draw_line( x, y, x + w - 1, y, c ); // top line
      draw_line( x + w - 1, y, x + w - 1, y + h - 1, c ); // right line
      draw_line( x + w - 1, y + h - 1, x, y + h - 1, c ); // bottom line
      draw_line( x, y + h - 1, x, y, c ); // left line
    }
}
