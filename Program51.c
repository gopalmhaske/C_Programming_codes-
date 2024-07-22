#include<stdio.h>

int countFactors(int iNum)
{
	int iCnt = 0;
	int iFactCnt = 0;

	for(iCnt=2;iCnt<=iNum/2;iCnt++)
	{
		if(iNum%iCnt == 0)
		{
			iFactCnt++;
		}
	}
	return iFactCnt;
}

int main()
{
	int iNum = 0;
	int iRet = 0;

	printf("Enter any number:\n");
	scanf("%d", &iNum);

	iRet = countFactors(iNum);
	printf("Factors count = %d", iRet);
	return 0;
}