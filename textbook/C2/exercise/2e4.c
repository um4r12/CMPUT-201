/* Write a program that declares several int and float variables
 * --without initializing them-- and then print their values.
 * Is there any pattern to the values? (Usually there isn't.)
 */

#include <stdio.h>

int main(void)
{
	int a, b, c, d;
	float e, f, g, h;

	printf("a: %d\nb: %d\nc: %d\nd: %d\n", a, b, c, d);
	printf("e: %f\nf: %f\ng: %f\nh: %f\n", e, f, g, h);
	
	return 0;
}	

