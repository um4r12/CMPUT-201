/* Write a program that calculates the remaining balance on a loan after the
 * first, second, and third monthly payments.
 *
 * Display each balance with two digits after the decimal point.
 */
#include <stdio.h>

int main(void) 
{
	float loan, yearlyInterestRate, monthlyInterestRate, monthlyPayments, balanceAfterFirst, balanceAfterSecond, balanceAfterThird;
	
	printf("Enter amount of loan: ");
	if (scanf("%f", &loan)!=1){
		printf("Something didn't read in correctly\n");
		return 0;
	}	
	printf("Enter yearly interest rate: ");
	if (scanf("%f", &yearlyInterestRate)!=1){
		printf("Something didn't read in correctly\n");
		return 0;
	}
	printf("Enter monthly payment: ");

	if(scanf("%f", &monthlyPayments)!=1){
		printf("Something didn't read in correctly\n");
		return 0;
	}

	yearlyInterestRate = yearlyInterestRate / 100;
	monthlyInterestRate = yearlyInterestRate / 12;
	loan = loan + (loan * monthlyInterestRate);
	balanceAfterFirst = loan - monthlyPayments;
	loan = balanceAfterFirst + (balanceAfterFirst * monthlyInterestRate);
	balanceAfterSecond = loan - monthlyPayments;
	loan = balanceAfterSecond + (balanceAfterSecond * monthlyInterestRate);
	balanceAfterThird = loan - monthlyPayments;

	printf("Balance remaining after first payment: $%.2f\n", balanceAfterFirst);
	printf("Balance remaining after second payment: $%.2f\n", balanceAfterSecond);
	printf("Balance remaining after third payment: $%.2f\n", balanceAfterThird);

	return 0;
}

