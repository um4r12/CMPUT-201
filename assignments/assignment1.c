#include <stdio.h>
#include <string.h>


int main(int argc, char * argv[])
{
	int i, validInput = 1;
	
	if (argc == 1) {
		
		// Create instances

		printf("Creating instances...\n");
	
	} else if (argc == 3) {
		
		if (strcmp(argv[1],"-i") != 0) {

			validInput = 0;

		} else {
		
			printf("Correct -i input\n");
	
		}

	} else if (argc == 5) {
		
		if ( ( (strcmp(argv[1],"-i") != 0) && (strcmp(argv[3],"-i") != 0) ) || ( (strcmp(argv[1],"-o") != 0) && (strcmp(argv[3], "-o") != 0) ) ) {

			validInput = 0;
		// create an output file
		} else {
			
			printf("Correct -i and -o input\n");
		}

	} else {
	
		validInput = 0;
	}

	if (validInput == 0) {
		
		printf("%s [-i inputfile [-o outputfile]]\n", argv[0]);
	}


	return 0;
}

