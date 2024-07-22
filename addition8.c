/**********************************************************
 //FUNCTION NAME: addition
 //DESCRIPTION: It is used to perform the add of two numbers
 //INPUT: integer, integer
 //OUTPUT: integer
 //DATE: 05/06/2024
 //AUTHOR: Splendid Infosystems
 **********************************************************/
int addition(int iValue1, int iValue2)
{
	if(iValue1 < 0) 
	{
		iValue1 = - iValue1; //updator
	}
	if(iValue2 < 0) 
	{
		iValue2 = - iValue2; //updator
	}
	
	return iValue1+iValue2;
}