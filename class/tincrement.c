#include <stdio.h>

int main() 
{	
	int i = 2, j;
	float x;

	

	i = 1;
	x = 2;
	printf("k = ++i + x++ = %d\n", (int)(++i + x++));

	return 0;
}
