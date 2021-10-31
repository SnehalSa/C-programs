#include<stdio.h>

int DisplayPower(int,int);

int main()
{
	int iValue=0; int iX=0;int iBet =0;
	printf("Enter power to display table\n");
	
	scanf("%d",&iValue);
	printf("Enter value\n");
	scanf("%d",&iX);
	
	
 iBet=DisplayPower(iValue,iX);
 printf("%d",iBet);
	
	return 0;
}

	


int DisplayPower(int iNo,int iY)
{
	 int iCnt=0; int int iRet=0;
	 if(iNo<0)
	 {
		 iNo=-iNo;
	 }
	 if(iNo==0)
	 {
		 return ;
	 }
	for(iCnt=1;iCnt<=(iY);iCnt++)
	{
		iRet=iNo*iCnt;
		
		  
		
	}
	return iRet;
		
	
	
	
}


