#include <cab202_graphics.h>

//  (a) Declare four global integer variables, as follows:
//      x - the horizontal location of the left edge of the rectangle
//      y - the vertical location of the top edge of the rectangle
//      w - the width of the rectangle.
//      h - the height of the rectangle.
int x, y, w, h;

//	(b) Declare a global variable of type char called c.
//      This is the character that is to be used to render the outline of the
//      rectangle.
char c;

void fill_rect(void) {
    //  (c) Test to see if either of w or h is less than 1.
    //      If so, the function should stop immediately and draw nothing.
    if ( w < 1 || h < 1){
      return;
    }

    //  (d) Calculate the x-coordinate of the right-hand side of the rectangle.
    //      Store the value in an integer variable called rect_right.
    int rect_right = x + w - 1;

    //  (e) Calculate the y coordinate of the bottom edge of the rectangle.
    //      Store the result in an integer variable called rect_base.
    int rect_base = y + h - 1;

    //  (f.a) Set up for loop that uses an integer variable called y_ctr to
    //      iterate from the top of the rectangle to the bottom of the rectangle.
    //      Initially y_ctr should be equal to y.
    //      The loop body should run while y_ctr is less than or equal to rect_base.

    for (int y_ctr = y; y_ctr <= rect_base; y_ctr++  ){

        //  (g) Draw a horizontal line from x to rect_right, with
        //      y-coordinate equal to y_ctr, using the character specified by
        //      c.

        draw_line(x, y_ctr, rect_right, y_ctr, c);
      }

    //  (f.b) End the loop.
}
