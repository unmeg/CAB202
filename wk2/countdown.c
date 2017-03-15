#include <stdio.h>

void count_down( void ) {
	// (a) Print the introductory message.
	printf("Reverse order list of integers greater than 75, beginning at 306, stepping by -3.\n");

	// (b) Declare an integer variable that you will use to count. Initially
	//     the counter should equal the start value, 306.
	int stupidCounter = 306;

	// (c) Begin a WHILE statement that will execute its loop body if the
	//     counter is greater than the end value, 75.
	while (stupidCounter > 75) {
			// (e) Print the value of the counter on a line by itself.
			printf("%d\n", stupidCounter);
			// (f) Subtract the step size, 3, from the counter.
			stupidCounter = stupidCounter - 3;
	// (d) End the WHILE statement
	}

}

int main( void ) {
	count_down();
	return 0;
}
