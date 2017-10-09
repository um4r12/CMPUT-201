#include <stdio.h>

int main(void) 
{

	int num, first_digit, last_two_digits, second_digit, last_digit;

	printf("Enter a three-digit number: ");
	if (scanf("%3d", &num) == 1) {

		first_digit = num / 100;
		last_two_digits = num % 100;
		second_digit = last_two_digits / 10;
		last_digit = last_two_digits % 10;
		
		printf("The reversal is: %d%d%d\n", last_digit, second_digit, first_digit);

	} else {
		
		printf("Invalid entry. Exiting....\n");
	}
	return 0;
}	
		
		
