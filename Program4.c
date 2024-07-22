#include<stdio.h>
int main()
{
	int iFirstNum = 0;
	int iSecNum = 0;
	int iResult = 0;

	printf("Enter first number:\n");
	scanf("%d", &iFirstNum);

	printf("Enter second number:\n");
	scanf("%d", &iSecNum);

	iResult = iFirstNum+iSecNum;
	printf("Addition is = %d", iResult);
	
	return 0;
}