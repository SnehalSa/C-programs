#include<stdio.h>  ///Hardcoaded


void Disply()
{
	
	int iNo=7521;
	int iDigit=0;
	
	while(iNo>0)
	{
	iDigit=iNo%10;       //1
	printf("%d\n",iDigit);  //1
	iNo=iNo/10;
	}
}	//752

int main()
{
	Disply();
	
	return 0;
}
	