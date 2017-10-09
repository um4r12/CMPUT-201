#include <stdio.h>

int main(void) {

	int n;
	
	printf("This program prints a table of squares starting from 3^2.\n");
	printf("Enter the maximum number to be squared in the table: ");
	scanf("%d", &n);

	// Solving using a while loop but this will print out backwards.
	while (n >= 3) {	
		printf("\t%d\t\%d\n", n,n*n);
		n--;

	}
	return 0;
}
