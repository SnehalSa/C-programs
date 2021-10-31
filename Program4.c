//////////////////////////////////////////
// input:5
// output: 5 4 3 2 1 
//////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)   //Defination 
{
	int i=0;
	if(iNo<0)                      ////updater//filter
   {
	  iNo=-iNo; 
   }
	  //  1     2   3
	for(i=iNo;i>=1;--i)              //i-- or --i is same.it is only increment
	{
		printf("%d\n",i); //4           ?.,m 
	}
	
	
	
}
 int main()
 {
	  int iValue=0;
	 printf("Enter the number\n");
	 scanf("%d",&iValue);
	 Display(iValue);
	 return 0;
 }
