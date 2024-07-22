#include<stdio.h>
#include<stdbool.h>

bool checkMultiple(int iNum)
{
	if((iNum%3==0)&&(iNum%5==0))
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
	bRet = checkMultiple(iNum);

	if(bRet == true)
	{
		printf("Number is multiple of 3 and 5\n");

	}
	else
	{
		printf("Number is not multiple of 3 and  5\n");
	}
	return 0;
}