#include "cab202_graphics.h"

void draw_bubbles(void){
	// (a) Draw a bubble at (78,23)
  draw_char(78, 23, 'O');

	// (b) Draw a bubble at (36,2)
  draw_char(36, 2, 'O');

	// (c) Draw a bubble at (41,16)
  draw_char(41, 16, 'O');

	// (d) Draw a bubble at (32,13)
  draw_char(32, 13, 'O');

	// Keep the following line without change.
	show_screen();
}

int main( void ) {
	setup_screen();

	draw_bubbles();

	draw_string( 0, screen_height() - 1, "Press any key to finish..." );
	wait_char();
	cleanup_screen();
	return 0;
}
