#include "cab202_graphics.h"

void draw_lines(void){

  // (a) Draw a line from (11,11) to (31,16).
  draw_line( 11, 11, 31,16, '~' );
  // (b) Draw a line from (31,16) to (41,4).
  draw_line ( 31,16,41,4 , '~' );
  // (c) Draw a line from (41,4) to (74,11).
  draw_line(41,4, 74,11, '~' );
  // (d) Draw a line from (74,11) to (11,11).
  draw_line(74,11,11,11, '~' );
	// Leave the following instruction unchanged.
	show_screen();
}

int main( void ) {
	setup_screen( );

	draw_lines();

	draw_string( 0, screen_height( ) - 1, "Press any key to finish..." );
	wait_char( );
	cleanup_screen( );
	return 0;
}
