#include <stdio.h>


#define INCHES_PER_POUND 166
int main(void) {
	
	int height, length, width, volume, weight;
	printf("Enter the height of the box: ");
	scanf("%d", &height);
	printf("Enter the length of the box: ");
	scanf("%d", &length);
	printf("Enter the width of the box: ");
	scanf("%d", &width);
	volume = height * length * width;
	weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;
	
	printf("Height: %d\nLength: %d\nWidth: %d\n", height, length, width);

	printf("The volume of the box is: %d\n", volume);
	printf("The weight of the box is: %d\n", weight);

	return 0;
}
