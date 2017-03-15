#include "cab202_graphics.h"

void draw_paddles( void ) {
  int paddle_length = 5;
  int h = screen_height(), w = screen_width(), middle_y = (h-paddle_length)/2;
  draw_line(3, middle_y - 2, 3, middle_y + 2, '@'); // left paddle
  draw_line(w - 4, middle_y - 3, w - 4, middle_y + 1, '@'); // right paddle 

	show_screen( );
}

int main( void ) {
	setup_screen();

	draw_paddles();

	draw_string( 0, screen_height( ) - 1, "Press any key to finish..." );
	wait_char();
	cleanup_screen();
	return 0;
}
