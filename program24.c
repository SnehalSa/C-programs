////////////////////////////////////////////////////
// Factors of number from user INPUT=10
// OUTPUT=1,2,5
///////////////////////////////////////////////////
#include<stdio.h>
void Displayfactor(int);
int main()
{
	int iValue=0;
	printf("Enter value\n");
	scanf("%d",&iValue);
	Displayfactor(iValue);
	
	return 0;
}
 void Displayfactor(int iNo)
 {
	 
	 int iCnt=0;  //Loop Counter
	 if(iNo<0)
	 {
		 iNo=-iNo;
	 }
	 
	  for(iCnt=1;iCnt<iNo;iCnt++)  //order of n
	 {
		  if((iNo%iCnt) == 0)  //
		  {
			 printf("Factor is :%d",iCnt);
		  }
		  else
		  {
			 printf("Non factor is:%d",iCnt); 
		  }
		  
	 }
 }