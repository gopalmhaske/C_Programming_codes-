#include<stdio.h>
#include<stdbool.h>

bool checkOdd(int iNum)
{
	if(iNum%2 != 0)
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

	printf("Enter the number:\n");
	scanf("%d", &iNum);

	bRet = checkOdd(iNum);

	if(bRet==true)
	{
		printf("Number is odd\n");
	}
	else
	{
		printf("Number is even\n");
	}
	return 0;
}