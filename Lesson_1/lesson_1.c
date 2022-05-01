#include <stdio.h>
#include "lesson_2.h"

/* 
 this is a global variable
 declared and initialized at the same time
 visible to the whole source file
*/
int x = 4;

int my_print(char my_arg[15]){
	// this is a local variable
	// declared and initialized at the same time
	// visible only to this function
	int y = 5;

	printf(my_arg);

	return y;
}

int main(void){
	
	int main_y = my_print("Hello again!\0");	
	printf("%d", x);
	printf("%d", main_y);
}