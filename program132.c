#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool CheckBit(UINT iNo)// 32 bit in use
{
	UINT iMask=0X00000008;//nehmi hexadecimal lihawa
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
		printf("4th bit is ON\n");
	}
	else
	{
		printf("4th bit is OFF\n");
	}
	
	return 0;
}