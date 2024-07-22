#include<stdio.h>
void display(int iNum)
{
	if(iNum<0)
	{
		iNum = - iNum;
	}

	int iCnt = 0;
	for(iCnt=1;iCnt<=iNum;iCnt++)
	{
		printf("%d\n", iCnt);
	}
}

int main()
{
	int iNum = 0;

	printf("Enter the number:\n");
	scanf("%d", &iNum);
	display(iNum);

	return 0;
}