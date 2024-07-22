#include<stdio.h>

int sumOfEvenDigits(int iNum)
{
	int iDigit = 0;
	int iSum = 0;

	while(iNum>0)
	{
		iDigit = iNum%10;
		if(iDigit%2==0)
		{
			iSum = iSum+iDigit;
		}
		iNum = iNum/10;
	}
	return iSum;
}

int main()
{
	int iNum = 0;
	int iRet = 0;

	printf("Enter any number:\n");
	scanf("%d", &iNum);

	iRet = sumOfEvenDigits(iNum);

	printf("Sum of even digits = %d", iRet);

	return 0;
}