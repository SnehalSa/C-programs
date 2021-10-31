#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT; //shewtche four bit on 

bool CheckBit(UINT iNo)// 32 bit in use
{
	UINT iMask=0X0000000f;
	UINT iResult=0;
	iResult=iNo&iMask;
	if((iResult==iMask))
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
	 UINT iValue=0;
	bool bRet=false;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	bRet=CheckBit(iValue);
	
	if(bRet==true)
	{
		printf("first four bit is ON\n");
	}
	else
	{
		printf("first four bit is OFF\n");
	}
	
	return 0;
}