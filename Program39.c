#include<stdio.h>
#include<stdbool.h>

bool checkPerfect(int iNum)
{
	if(iNum<0)
	{
		iNum = - iNum;
	}

	int iCnt = 0;
	int iSum = 0;
	for(iCnt=1;iCnt<=iNum/2;iCnt++)
	{
		if(iNum%iCnt==0)
		{
			iSum = iSum+iCnt;
		}
	}

	if(iSum == iNum)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int iNum = 0;
	bool bRet = false;

	printf("Enter number:\n");
	scanf("%d", &iNum);

	bRet = checkPerfect(iNum);

	if(bRet==true)
	{
		printf("%d is perfect number\n", iNum);
	}
	else
	{
		printf("%d is not perfect number\n", iNum);
	}
	
	return 0;
}