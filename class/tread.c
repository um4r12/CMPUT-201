# include <stdio.h>

int main(void) {

	int i, j;
	float x, y;

	scanf("%d%d%f%f", &i, &j, &x, &y); /*If I added &(x+y), I would get an error. scanf only accepts variables not a formula */ 
	printf("i = %d, \n j = %d, \n x = %f, \n y = %f, \n x + y = %f\n",
	    i, j, x, y, x+y);
	return 0;
}
