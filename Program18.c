#include<stdio.h>
int  display( int iValue)
{
	if (iValue< 0)
	{
			iValue=  -iValue ;
		}
		//int iCnt=1;
	for( int iCnt=1;iCnt<=iValue;iCnt++)

		
	{
		printf("Hello\n",iCnt);

	}
}
int main()

{
	int iCnt=0;
	printf("how many type you want to print?\n");
	scanf("%d",&iCnt);
	display(iCnt);

	return 0;
}