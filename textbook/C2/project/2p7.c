/* Write a program that asks the user to enter a U.S. dollar amount
 * and then shows how to pay that amount using the smallest number of
 * $20, $10, $5, and $1 dollar bills
 */

#include <stdio.h>

int main(void) 
{
	int amount, twenties, tens, fives, ones;
	
	printf("Enter a dollar amount: ");
	scanf("%d", &amount);
	
	twenties = amount / 20;
	amount = amount - (twenties * 20);
	tens = amount / 10;
 	amount = amount - (tens * 10);
	fives = amount / 5;
	amount = amount - (fives * 5);
	ones = amount / 1;
	
	printf("$20 bills: %d\n", twenties);
	printf("$10 bills: %d\n", tens);
	printf("$5 bills: %d\n", fives);
	printf("$1 bills: %d\n", ones);

	return 0;
}
