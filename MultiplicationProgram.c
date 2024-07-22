#include<stdio.h>
int multiplication(int, int); //Forward 
/**********************************************************
 //FUNCTION NAME: main
 //DESCRIPTION: It's entry point function
 //INPUT: NA
 //OUTPUT: NA
 //DATE: 10/06/2024
 //AUTHOR: Gopal 
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

	iResult = multiplication(iFirstNum, iSecNum);

	printf("Multiplication is = %d", iResult);
	
	return 0;
}