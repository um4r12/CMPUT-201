#include <stdio.h>

int main(void) {

	int i, n;
	
	printf("This program prints a table of squares starting from 3^2.\n");
	printf("Enter the maximum number to be squared in the table: ");
	scanf("%d", &n);
	
	i = 3;
	// Solving using a while loop and printing in ascending order.
	while (i<=n ) {	
		printf("\t%d\t\%d\n", n,n*n);
		i++;

	}
	return 0;
}
