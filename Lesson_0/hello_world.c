#include <stdio.h>

int my_print(char my_arg[6]){
	printf(my_arg);

	return 1;
}

int main(void){
	char my_text[6] = "Hello\0";
	printf("%d", my_print(my_text));

	return 0;
}