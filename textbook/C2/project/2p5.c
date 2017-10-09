/* Write a program that asks the user to enter a value for x and then displays
 * the value of the following polynomial: (3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6)
 */

#include <stdio.h>

int main(void) 
{
	int fifth = 3, fourth = 2, third = 5, second = 1, first = 7, constant = 6, x;

	printf("The following polynomial will be evaluated: 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\n");
	printf("Enter an x-value: ");
	scanf("%d", &x);
	
	fifth = fifth * (x * x * x * x * x);
	fourth = fourth * (x * x * x * x);
	third = third * (x * x * x);
	second = x * x;
	first = first * x;

	printf("The polynomial for \"%d\" evaluates to: %d\n", x, fifth + fourth - third - second + first - constant);
	
	return 0;

}
