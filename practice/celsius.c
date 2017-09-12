#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALING_FACTOR (5.0f/9.0f)

int main(void){
	
	float fahrenheit, celsius;
	printf("Welcome to the Fahrenheit converter o imperialist.\n");
	printf("Enter the temperature in Fahrenheit that you would like to convert:");
	if (scanf("%f", &fahrenheit) == 1){

		celsius = (fahrenheit-FREEZING_PT)*SCALING_FACTOR;
		printf("The Celsius equivalent is: %.1f\n", celsius);
	} else {
		return 0;
	}

	return 0;
}

