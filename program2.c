#include<stdio.h>


void Display(int); //Declaration
 

int main()
{
	int iValue=0;
printf("Enter number of Display\n");
scanf("%d",&iValue);
	
	 Display(iValue);
	
	
	
	return 0;
}

void Display(int iNo) //Defination
{
   int i=0;
for(i=1;i<=iNo ;i++)
{
printf("Marvellous\n");
}	
}

