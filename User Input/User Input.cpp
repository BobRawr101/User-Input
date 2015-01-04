// User Input.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	float temp; // declare scanf_s variable
	char choice[10];
	char tempchoice[20];
	
		do 
		{
			printf("Do you want to continue? Yes, or No? \n");
			scanf_s("%9s", choice, 9);

			if (strcmp(choice, "Yes") == 0)
			{
				printf("Enter Unit of Measurement: 1. Fahreneheit 2. Celsius or 3. Kelvin \n");
				scanf_s("%20s", tempchoice, 20);
				if (strcmp(tempchoice, "Fahrenheit") == 0)
				{
					printf("Enter degrees Fahrenheit: "); // prompt user to enter temperature
					scanf("%g", &temp); // variable 
					printf("%g in Fahrenheit is %.3g in Celsius and %.3g in Kelvin \n", temp, (temp - 32) * 5 / 9, ((temp - 32) * 5 / 9) + 273); // output in Celsius and Kelvin
				} 

			}

			if (strcmp(choice, "No") == 0)
			{
				printf("Program terminated. \n");
				return 0;
			}

			if (strcmp(choice, "Yes") != 0 && strcmp(choice, "No") != 0)
			{
				system("cls");
				printf("Please enter valid number of terms! \n");
				system("pause");
			}

		} 
		while (strcmp(choice, "Yes") == 0 || (strcmp(choice, "Yes") != 0 && strcmp(choice, "No")));
		
	system("pause"); // creates pause to CMD doesn't immediately close after code is executed
	return 0; // I've seen this in every code on the web, I don't know what this does, but I think it does something.
}