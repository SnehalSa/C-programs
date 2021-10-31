#include<stdio.h>
include<stdio.h>
 unsigned long int Factorial(int);    //Defination
 int main()
 {
	 int iNo=0;
	 unsigned long iRet=0;
	 printf("Enter number\n");
	 scanf("%d",&iNo);
	 
	 iRet=Factorial(iNo);
	 
	 printf("Factorial is: %ld\n",iRet);
	 
	 
	 return 0;
 }
  unsigned long int Factorial(int iValue)   //Defination
 {
	 unsigned long int ifact=1;                                  //isum=1
	 int iCnt=0;
	 if(iValue<0) ////updater//filter
   {
	  iValue=-iValue; 
   }
	 
	 //   1          2           3
	/* for(iCnt=1;iCnt<=iValue;iCnt++)
	 {
		ifact=ifact*iCnt; // 4 
	 }
	 return ifact;
	 */
	 iCnt=1;  //1
	 while(iCnt<=iValue)  //2
	 {
		 ifact=ifact*iCnt;  //4
		 iCnt++ ;//3
	 }
	 
	 
 }
 
 
