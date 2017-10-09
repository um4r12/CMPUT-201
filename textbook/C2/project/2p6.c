/* Modify the program of Programming Project 5 so that the polynomial is
 * evaluated using the following formula:
 * ((((3x + 2)x - 5)x - 1)x + 7)x - 6
 */
#include <stdio.h>

int main(void) 
{
	int x;

	printf("The following polynomial will be evaluated: 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\n");
	printf("Enter an x-value: ");
	scanf("%d", &x);
	
	printf("The polynomial for \"%d\" evaluates to: %d\n", x, (((((3 * x) + 2) * x - 5) * x -1) * x + 7) * x -6);

	return 0;

}
