#include<stdio.h>

void Disply(int);

int main()
{
	int iValue=0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	Disply(iValue);
	
	return 0;
}
	
void Disply(int iNo)
{
	
	int iDigit=0;
	
	while(iNo>0)
	{
	  iDigit=iNo%10;       
	  printf("%d\n",iDigit);  
	  iNo=iNo/10;
	}
}