#include<stdio.h>

int countDigits(int iNum)
{
	int iDigit = 0;
	int iDigitCnt = 0;

	while(iNum>0)
	{
		iDigit = iNum%10;
		iDigitCnt++;
		iNum = iNum/10;
	}
	return iDigitCnt;
}

int main()
{
	int iNum = 0;
	int iRet = 0;

	printf("Enter any number:\n");
	scanf("%d", &iNum);

	iRet = countDigits(iNum);

	printf("Count = %d", iRet);

	return 0;
}