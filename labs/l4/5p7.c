#include <stdio.h>


int main(void) {

	int i1, i2, i3, i4, min_one, min_two, min, max_one, max_two, max;

	printf("Enter four digits: ");
	if (scanf("%d %d %d %d", &i1, &i2, &i3, &i4) == 4) {
		if (i1 > i2) {
			max_one = i1;
			min_one = i2;
		} else{
			max_one = i2;
			min_one = i1;
		}
		if (i3 > i4) {
			max_two = i3;
			min_two = i4;
		} else {
			max_two = i4;
			min_two = i3;
		}
		if (max_one > max_two){
			max = max_one;
		} else {
			max = max_two;
		}
		if (min_one < min_two){
			min = min_one;
		} else {
			min = min_two;
		}
		printf("Largest: %d\n", max);
		printf("Smallest: %d\n", min );
		
		return 0;

	} else {
		printf("Invalid entry. Exiting...\n");
		return 0;
	}

}
