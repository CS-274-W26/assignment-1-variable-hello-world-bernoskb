#include <stdio.h> // Necessary for print
#include <stdlib.h> // Adds standard library of functions including the random
//number rand() function




int main() {
	srand(time(NULL)); // Seeds the random myrandgenerator
	
	int myrand = rand() % 11; //random integer from 0-10
	
	printf("The number chosen is: %d\n",myrand); //prints the random integer

	if (myrand <= 4) { //prints statement when int is between 0 and 4

		 printf("Eat more beef\n"); 
	}
	else if (myrand> 4 && myrand < 10) { //prints statement when int is between
										// 5 and 9

		printf("FRODO LIVES\n");
	}

	else {	// prints statement when int equals 10
		
		printf("Larn is the best rougelike\n");
	}






}
