#include<stdio.h>

int countEvenDigits(int iNum)
{
	int iDigit = 0;
	int iEvenDigitCnt = 0;

	while(iNum>0)
	{
		iDigit = iNum%10;
		if(iDigit%2==0)
		{
			iEvenDigitCnt++;
		}
		iNum = iNum/10;
	}
	return iEvenDigitCnt;
}

int main()
{
	int iNum = 0;
	int iRet = 0;

	printf("Enter any number:\n");
	scanf("%d", &iNum);

	iRet = countEvenDigits(iNum);

	printf("Count of even digits = %d", iRet);

	return 0;
}