/**********************************************************
 //FUNCTION NAME: addition
 //DESCRIPTION: It is used to perform the add of two numbers
 //INPUT: integer, integer
 //OUTPUT: integer
 //DATE: 05/06/2024
 //AUTHOR: Gopal 
 **********************************************************/

int addition(int iValue1, int iValue2)
{
	if(iValue1 < 0)//updater
	{
		//printf("please enter positive number \n");
		return -1;//filter 
		//iValue1 = - iValue1;
		
	}
	if(iValue2< 0)//update
	{
		//printf("please enter positive number \n");
		return -1;//filter
		//iValue2 = - iValue2;
	}
	return iValue1+iValue2;

}
