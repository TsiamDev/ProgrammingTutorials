#include <stdio.h>

/* sample if pseudocode
if (<one or more conditions>){
	// code to execute when conditions are met
}else if(<one or more conditions>) {
	// code to execute when conditions are met
}// we can add here as many else if's as we need
else {
	// code to execute if you got to this point
}
*/

int get_abs(int x){
	// if x > 0 then return x
	if (x > 0){
		return x;
	}
	// if x < 0 then return -x
	else if(x < 0){
		return -x;
	}
	// if x == 0 then return 0
	else if (x == 0){
		return 0;
	}
	
	
}

int main(void){
	printf("%d\n", get_abs(-4));
	printf("%d\n", get_abs(6));
	printf("%d\n", get_abs(0));

	return 0;
}

