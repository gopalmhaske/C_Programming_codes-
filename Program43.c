#include<stdio.h>
void  displayNumber(int iNum)
{
	int iCnt =0;
	for(iCnt=iNum;iCnt>=1;iCnt--)
	{
		printf("%d\n",iCnt);
	}
}

int main()
{
	int iNum =0;
	printf("Enter the number :\n");
	scanf("%d",&iNum);
	displayNumber(iNum);
	return 0;
}