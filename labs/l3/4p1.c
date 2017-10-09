#include <stdio.h>

int main(void) 
{

	int num, first_digit, last_digit;

	printf("Enter a two-digit number: ");
	if (scanf("%2d", &num) == 1) {

		first_digit = num / 10;
		last_digit = num % 10;
		
		printf("The reversal is: %d%d\n", last_digit, first_digit);

	} else {
		
		printf("Invalid entry. Exiting....\n");
	}
	return 0;
}	
		
		
