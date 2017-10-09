/* This program accepts a Farenheit value and converts it into Celsius */
/* Muhammad Umer Khan  						       */
/* Sept. 13 2017 						       */
/***********************************************************************/

#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALING_FACTOR (5.0f/9.0f)

int main(void){
	
	float fahrenheit, celsius;

	for (;;) {
		printf("Welcome to the Fahrenheit converter o imperialist.\n");
		printf("Enter the temperature in Fahrenheit that you would like to convert (enter non-num to terminate):");
		if (scanf("%f", &fahrenheit) == 1){
			celsius = (fahrenheit-FREEZING_PT)*SCALING_FACTOR;
			printf("The Celsius equivalent is: %.1f\n", celsius);
		}
		 else {
             		return 0;
		}
	}

	return 0;
}

