#include<stdio.h>
int addition(int, int); //Forward 
/**********************************************************
 //FUNCTION NAME: main
 //DESCRIPTION: It's entry point function
 //INPUT: NA
 //OUTPUT: NA
 //DATE: 05/06/2024
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

	iResult = addition(iFirstNum, iSecNum);

	printf("Addition is = %d", iResult);
	
	if (iResult ==-1)
	{
		printf("Enter the postive num");
		}
		else {
			printf("",iResult);
		}
		
	
	return 0;
}