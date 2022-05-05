#include <stdio.h>

int main(void){
	int counter;
	
	for( int i = 0; i < 1000; i++){
		counter = i;
	}

	printf("Counter is %d\n", counter);
}