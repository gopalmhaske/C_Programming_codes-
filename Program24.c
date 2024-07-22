#include<stdio.h>
int summation(int iNum)
{
	int iSum = 0;
	int iCnt = 0;

	for(iCnt=1;iCnt<=iNum;iCnt++)
	{
		iSum = iSum+iCnt;
	}
	return iSum;
}
int main()
{
	int iNum = 0;
	int iRet = 0;

	printf("Enter the number:\n");
	scanf("%d",&iNum);

	iRet = summation(iNum);
	printf("Summation = %d\n", iRet);
}