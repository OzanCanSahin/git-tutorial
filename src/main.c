#include<stdio.h>
#include "espl_lib.h"

void main()
{
	char cont;

	do
	{
		printf("Hello ESPL \n");

		unsigned int UserNumber;
		char* funcResult; 

		printf("Enter a number: \n");
		scanf("%d", &UserNumber);
		funcResult = num_to_words(UserNumber);
		printf("%c \n", &funcResult);

		printf("Do you want to enter another number?(y/n) \n");
		scanf("%c", &cont);

	} while (cont == 'y');
	
}
