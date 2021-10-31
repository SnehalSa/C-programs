#include<stdio.h>

int Addition(int);

int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet=Addition(iValue);
	printf(" Number of digit is:%d",iRet);
	
	return 0;
}
	
int Addition(int iNo)
{
	
	int iDigit=0;
	int iSum=0;
	int iCnt=0;
	if(iNo==0)         //filter
	{
		return 1;
	}
	if(iNo<0)               //updater
	{
		iNo=-iNo;
	}
	
	
	while(iNo>0)
	{
	  iDigit=iNo%10;       
	  iCnt++;
	  iNo=iNo/10;
	 
	}
	 return iCnt++;
}