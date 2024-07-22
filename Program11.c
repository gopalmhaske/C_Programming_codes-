 //#include'header11.h'
// Instead of
// #include<header11.h>
// #include "include/header11.h"
#include <stdio.h>
#include "../include/header11.h"

/**********************************************************
 //FUNCTION NAME: main
 //DESCRIPTION: It's entry point function
 //INPUT: NA
 //OUTPUT: NA
 //DATE: 05/06/2024
 //AUTHOR: Splendid Infosystems
 **********************************************************/
int main()
{
	int iFirstNum = 0;
	int iSecNum = 0;
	int iResult = 0;

	printf("Enter first number:\n");
	scanf("%d", &iFirstNum);

	printf("Enter second number:\n");
	scanf("%d", &iSecNum);

	iResult = addition(iFirstNum, iSecNum);

	if(iResult == -1)
	{
		printf("Wrong Input. Enter positive number\n");
	}
	else
	{
		printf("Addition is = %d", iResult);
	}
	
	return 0;
}