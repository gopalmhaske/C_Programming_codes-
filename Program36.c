#include<stdio.h>
void dipsplayFactors(int iNum)
{
	if(iNum< 0)
	{
		iNum = - iNum;
	}
	int iCnt = 0;
	for(iCnt=1;iCnt<=iNum/2;iCnt++)
	{
		if (iNum%iCnt==0)
		{
			printf("%d\n",iCnt);
		}
	}
	printf("%d\n",iNum);
}
int main()
{
	int iNum = 0;
	printf("Enter number :\n");
	scanf("%d",&iNum);
	dipsplayFactors(iNum);
	return 0;

}