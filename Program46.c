#include<stdio.h>
#include<stdbool.h>

bool checkPerfect(int iNum)
{
	int iCnt = 0;
	for(iCnt=2;iCnt<iNum;iCnt++)
	{
		if(iNum%iCnt == 0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int iNum = 0;
	bool bRet = false;

	printf("Enter any number:\n");
	scanf("%d", &iNum);

	bRet = checkPerfect(iNum);

	if(bRet==true)
	{
		printf("%d is a prime number", iNum);
	}
	else
	{
		printf("%d is not prime number", iNum);
	}
	return 0;
}