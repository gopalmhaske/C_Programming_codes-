#include<stdio.h>
#include<stdbool.h>

bool checkPrime(int iNum)
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
	
	if(iFactCnt == 0)
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

	printf("Enter any number:\n");
	scanf("%d", &iNum);

	bRet = checkPrime(iNum);
	
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