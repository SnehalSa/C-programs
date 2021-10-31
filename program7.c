/////FACTORIAL
// INPUT=-5
// OUTPUT=120
// INPUT=5
// OUTPUT=120 (1*2*3*4*5)
// unsigned long is used bez enter value is if 15 then value is greter it get fatne thats why we use this the limit is 64 bit allowed in c compiler

#include<stdio.h>
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
	 unsigned long int ifact=1;      //we can change as per requirement                              //isum=1
	 int iCnt=0;
	 if(iValue<0) ////updater//filter
   {
	  iValue=-iValue; 
   }
	 
	 //   1          2           3
	 for(iCnt=1;iCnt<=iValue;iCnt++)
	 {
		ifact=ifact*iCnt; // 4 assignment /initialisatin statement Rhs=Lhs  isum=isum*iCnt
		
	 }
	 return ifact;
	 
	 
 }
 
 