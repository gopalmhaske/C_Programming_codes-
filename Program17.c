#include<stdio.h>
int  display( int iValue)
{


	for( int iCnt=1;iCnt<=iValue;iCnt++)
		

	{
		printf("Hello\n%d",iCnt);

	}
};
int main()

{
	int iCnt=0;
	printf("how many type you want to print?\n");
	scanf("%d",&iCnt);
	display(iCnt);
	

	return 0;
}