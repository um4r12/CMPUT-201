#include <stdio.h>

int main(void)
{
	int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, first_sum, second_sum, total, total_subtract, remainder, check_digit;
	
	printf("Enter the first (single) digit: ");
	scanf("%1d", &d);
	printf("Enter first group of five digits: ");
	scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
	printf("Enter second group of five digits: ");
	scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);

	first_sum = d + i2 + i4 + j1 + j3 + j5;
	printf("First sum: %d\n", first_sum);
	second_sum = i1 + i3 + i5 + j2 + j4;
	printf("Second sum: %d\n", second_sum);
	total = 3 * first_sum + second_sum;
	printf("Total: %d\n", total);

	total_subtract = total - 1;
	printf("Subtract 1 from total: %d\n", total_subtract);
	remainder = total_subtract % 10;
	printf("Remainded when adjusted total is divided by 10: %d\n", remainder);	
	check_digit = 9 - remainder;
	printf("Step by step check digit: %d\n", check_digit);
	printf("Check digit: %d\n", 9 - ((total - 1) % 10));

	return 0;
}
