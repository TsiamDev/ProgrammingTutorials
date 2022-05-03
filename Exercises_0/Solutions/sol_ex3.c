#include <stdio.h>
#include <stdlib.h>

#include "sol_ex3.h"

//global variables go here
//int counter;
//since there is a header file you can also
//define globals in that file instead

int abs_of_two_ints(int x, int y){
	counter = counter + 1;

	return abs(x - y);
}

int main(void){
	counter = 0;
	abs_of_two_ints(3, 10);
	abs_of_two_ints(14, 5);
	abs_of_two_ints(-10, 5);

	printf("The function <abs_of_two_ints> was called %d times", counter);

	return 0;
}