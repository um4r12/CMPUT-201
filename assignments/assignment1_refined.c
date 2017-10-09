#include <stdio.h>
#include <string.h>


int main(int argc, char * argv[])
{
	int i, inputFile = 0, outputFile = 0;
	
	if (argc == 1) {
		
		// Create instances

		printf("Creating instances...\n");
		
		return 0; /* End program after creating instances.*/
			  /* Rest of the program is not executed. `*/	
	}		
	for (i=1; i < argc; i++) {

		if (strcmp(argv[i],"-i") == 0 && argv[i+1] != NULL) {
			inputFile = i + 1;

		} else if (strcmp(argv[i], "-o") == 0 && argv[i+1] != NULL) {
			outputFile = i + 1;	
		}		
	}
	if (inputFile == 0) {

		printf("%s [-i inputfile [-o outputfile]]\n", argv[0]);
		
	
		return 0; /* End program as the arguments passed in are incorrect.*/
			  /* The '-i' flag or the file name was not specified.    */

	}
	printf("The input file name is %s\n", argv[inputFile]);
	
	if (outputFile != 0) {
		printf("The output file name is %s\n", argv[outputFile]);
		return 0;

	printf("No output name specified\n");
	}
	return 0;
}

