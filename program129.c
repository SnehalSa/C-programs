#include<stdio.h>

void DisplayBinary(int iNo)
{
	int iDigit=0;
	
	while(iNo!=0)
{
	iDigit=iNo%2;
	printf("%d\t",iDigit);
	iNo=iNo/2;
}
}



int main()
{
int iNo=0;

printf("Enter number\n");
scanf("%d",&iNo);

	DisplayBinary(iNo);
	
	return 0;
}