#include <stdio.h>

int main(void){
	// if you want the variable "i" to be available outside
	// of the for loop, you need to declare it like so:
	int i = 0;
	// and then, omit the "int i = start" statement like this:
	for( ; i < 1000; i++){
		
	}

	printf("Counter is %d\n", i);
}

