#include <stdio.h>
#include <math.h>

void variable_operations(int x, int y){
	int operation = x + y;
	printf("x + y = %d\n", operation);

	operation = x - y;
	printf("x - y = %d\n", operation);

	operation = x * y;
	printf("x * y = %d\n", operation);

	operation = pow(x, y);
	printf("x ^ y = %d\n", operation);

	operation = x / y;
	printf("x div y = %d\n", operation);
	
	operation = x % y;
	printf("x mod y = %d\n", operation);
}

void variable_constant_operations(int x){
	int operation = x + 5;
	printf("x + 5 = %d\n", operation);

	operation = x - 5;
	printf("x - 5 = %d\n", operation);

	operation = x * 5;
	printf("x * 5 = %d\n", operation);

	operation = pow(x, 5);
	printf("x ^ 5 = %d\n", operation);

	operation = x / 5;
	printf("x div 5 = %d\n", operation);
	
	operation = x % 5;
	printf("x mod 5 = %d\n", operation);
}

void constant_operations(void){
	int operation = 2 + 5;
	printf("2 + 5 = %d\n", operation);

	operation = 2 - 5;
	printf("2 - 5 = %d\n", operation);

	operation = 2 * 5;
	printf("2 * 5 = %d\n", operation);

	operation = pow(2, 5);
	printf("2 ^ 5 = %d\n", operation);

	operation = 2 / 5;
	printf("2 div 5 = %d\n", operation);
	
	operation = 2 % 5;
	printf("2 mod 5 = %d\n", operation);
}

int main(void){
	
	constant_operations();

	printf("\nx = 3\n");
	variable_constant_operations(3);

	printf("\nx = 2, y = 4\n");
	variable_operations(2, 4);

	return 0;
}