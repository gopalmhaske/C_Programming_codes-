#include<stdio.h>
#include<stdbool.h>

bool checkPerfect(int iNum)
{
	int iCnt = 0;
	bool isPrime = true;

	for(iCnt=2;iCnt<iNum;iCnt++)
	{
		if(iNum%iCnt == 0)
		{
			isPrime = false;
		}
	}
	return isPrime;
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