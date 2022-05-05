#include <stdio.h>
#include <stdlib.h>

int abs_of_two_ints(int x, int y){
	return abs(x - y);
}

int main(void){
	printf("%d\n", abs_of_two_ints(3, 10));

	return 0;
}