#include<stdio.h>
#include<stdbool.h>

int Checkpalindrom(int);

int main()
{
	int iValue=0;
	int iRet=0; 
	bool bRet=false;
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	bRet=Checkpalindrom(iValue);
	
	if(bRet==true)
	{
		printf("Number is palindrom\n");
	}
	else(bRet==false)
	{
		printf("Number is not palindrom\n");
	}
	
	return 0;
}
	
int Checkpalindrom(int iNo)
{
	
	int iDigit=0;
	int iRev=0;
	int iTemp=iNo;
	

	while(iNo!=0)
	{
	  iDigit=iNo%10; 
	  
      iRev=(iRev*10)+iDigit;
	  if(iNo==iTemp)
	  {
		  return true;
	  }
	  else
	  {
		  return false;
	  }
		  
	  
	
	  iNo=iNo/10;
	}
	 
	
	 
}
