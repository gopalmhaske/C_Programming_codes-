// #include<stdio.h>
// void displayFactors(int iNum)
// {
// 	if (iNum<0)
// 	{
// 		iNum = - iNum;
// 	}
// 	int iCnt = 0;
// 	int iSum = 0;
// 	for(iCnt=1;iCnt<=iNum/2;iCnt++)
// 	{
// 		if(iNum%iCnt==0)
// 		{
// 			iSum = iSum+iCnt;
// 		}
// 	}
// 	iSum=iSum+iNum;
// 	printf("summation =%d",iSum);
// }
// int main()
// {
// 	int iNum = 0;
// 	printf("Enter the number :\n");
// 	scanf("%d",&iNum);
// 	displayFactors(iNum);
// 	return 0;
// }
#include<stdio.h>
void displayFactors(int iNum)
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
	iSum = iSum+iNum;
	printf("Summation = %d", iSum);
}
int main()
{
	int iNum = 0;
	printf("Enter number:\n");
	scanf("%d", &iNum);
	displayFactors(iNum);
	return 0;
}