#include<stdio.h>
#include "espl_lib.h"

void main()
{
	char cont = 'y'; //continue entering numbers
	printf("Hello ESPL \n");

	//to clean input buffer in case of invalid inputs
	int c; 
	int InputInteger;

	do
	{

		unsigned int UserNumber;
		char* funcResult; 
		char term;

		printf("Please enter a number: \n");
		InputInteger = scanf("%d", &UserNumber);

		if(InputInteger == 1)
		{
			funcResult = num_to_words(UserNumber);
			printf("%s \n", funcResult);

			printf("Do you want to enter another number?(y/n) \n");
			scanf(" %c", &cont);
	        printf("\n");

	        if(cont != 'y' && cont != 'Y' && cont != 'n' && cont != 'N')
	        {
	        	do
	        	{
	        		printf("You entered an invalid answer. Do you want to enter another number?(y/n) \n");
	        		scanf(" %c", &cont);
	        		printf("\n");
	        	} while(cont != 'y' && cont != 'Y' && cont != 'n' && cont != 'N');
	        }
		} else 
		{
			printf("You entered an invalid value instead of a number. Please enter a number: \n");
			while((c = getchar()) != '\n' && c != EOF);
		}
		
	} while (cont == 'y' || cont == 'Y');	
	
}
