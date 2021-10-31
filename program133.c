#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool CheckBit(UINT iNo)// 32 bit in use
{
	UINT iMask=0X00000840;//0000 0000 0000 0000 0000 1000 0100 0000 
	UINT iResult=0;       // 0    0     0    0    0    8    4   0
	iResult=iNo&iMask;     //0X00000840
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
		printf("7 th and 12 th bit is ON\n");
	}
	else
	{
		printf("7th and 12th bit is OFF\n");
	}
	
	return 0;
}