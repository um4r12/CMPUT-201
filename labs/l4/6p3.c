#include <stdio.h>

int main(void) {

	int i1, i2, m, n, remainder;

	printf("Enter a fraction: ");
	if (scanf("%d/%d", &i1, &i2) == 2) {
		if (i1>i2) {
			m = i1;
			n = i2;
		} else {
			m = i2;
			n = i1;
		}	
		for (; n != 0;) {
			remainder = m % n;
			m = n;
			n = remainder;
		//	printf("m: %d\nn: %d\n", m, n);
		}
		
		i1 = i1 / m;
		i2 = i2 / m;

		printf("In lowest term: %d/%d\n", i1, i2);	
	
	} else {
		printf("Invalid entry. Exiting...\n");
	}
	return 0;

}
