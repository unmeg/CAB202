#include <stdlib.h>
#include <math.h>
#include <cab202_graphics.h>
#include <cab202_sprites.h>
#include <cab202_timers.h>

#define DELAY 10 /* milliseconds */

bool game_over;
bool update_screen = true;

//  (a) Declare a global sprite_id called bomb;
sprite_id bomb;

void setup(void) {
    //  (b) Initialise the bomb to display a 1x1 image consisting of a string
    //      containing a single 'O' character. The sprite should appear at
    //      initial location (12,16).
    char * bomb_image = "O";
    bomb = sprite_create(12, 16, 1, 1, bomb_image);

    //  (c) Declare a double precision floating point variable called dx
    //      and set it equal to the difference between the x-coordinate of the
    //      star and that of the bomb.
    double dx = abs(78 - 12);

    //  (d) Declare a double precision floating point variable called dy
    //      and set it equal to the difference between the y-coordinate of the
    //      star and that of the bomb.
    double dy = abs(18 - 16);

    //  (e) Declare a double precision floating point value called dist
    //      and set it equal to the distance between the bomb and the star.
    //      The distance can be calculated using dx and dy, and applying the
    //      Theorem of Pythagoras.
    //      Hint: the right-hand side of the assignment statement should look
    //      like this: sqrt( dx * dx + dy * dy );
    double dist = sqrt( dx * dx + dy * dy);

    //  (f) Multiply dx by the desired speed, then divide it by the distance.
    dx = (dx * 0.2) / dist;
    //  (g) Do the same to dy.
    dy = (dy * 0.2) / dist;
    //  (h) Turn the bomb to move towards the star. This involves dx and dy.
    sprite_turn_to( bomb, dx, dy );
    //  (i) Draw the bomb.
    sprite_draw(bomb);
    //  (j) Draw the star at its designated location, (78,18).
    draw_char(78, 18, '*');
}

// Play one turn of game.
void process(void) {
    // Keep the next line intact.
    clear_screen();

    //  (k) Move the bomb forward one step.
    sprite_step(bomb);

    //  (l) Draw the bomb.
    sprite_draw(bomb);

    //  (m) Draw the star at its designated location, (78,18).
    draw_char(78, 18, '*');

    //  (n) Get the position of the bomb on the screen, and compare it to the
    //      location of the star. If they are both the same, set game_over true.
   if (round(sprite_x(bomb)) == 78 && round(sprite_y(bomb)) == 18){
      game_over = true;
    }
}
