/* Write a program that asks the user to enter a dollars-and-cents amount, then
 * displays the amount with 5% tax added
 */

#include <stdio.h>

int main(void)
{
	float amount, total;
	
	printf("Enter a dollars-and-cents amount: ");
	scanf("%f", &amount);
	
	total = amount * 1.05f;
	
	printf("The total (including tax) is: $%.2f\n", total);
	
	return 0;
}
