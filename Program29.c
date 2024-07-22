#include<stdio.h>
#include<stdbool.h>

bool checkDivisible(int iNum)
{
	if(iNum%7==0)
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
	int iNum =0;
	bool bRet=false;

	printf("Enter any number:\n");
	scanf("%d",&iNum);
	bRet = checkDivisible(iNum);

	if(bRet == true)
	{
		printf("Number is divisible of 7\n");

	}
	else
	{
		printf("Number is not divisible  of 7\n");
	}
	return 0;
}