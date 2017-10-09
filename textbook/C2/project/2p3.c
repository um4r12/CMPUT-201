/* Write a program that computes the bolume of a sphere with a 10-meter radius, 
 * using the formula v = 4/3(pi)r^3.
 * Write the fraction 4/3 as 4.0f/3.0f. (Try writing it as 4/3. What happens?)
 * Hint: C doesn't have an exponentiation operator, so you'll need to
 * multiply r by itself twice to compute (r to the power of 3).
 */

#include <stdio.h>

int main(void) 
{
	int rad;
	printf("Enter the radius of the sphere: ");
	scanf("%d", &rad);
	printf("The volume of a sphere with a 10-meter radius is: %.2f\n", 
	(4.0f/3.0f) * 3.14f * rad * rad * rad);
	
	return 0;
}
