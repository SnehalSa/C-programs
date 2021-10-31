/////FACTORIAL
// INPUT=-5
// OUTPUT=120
// INPUT=5
// OUTPUT=120 (1*2*3*4*5)


#include<stdio.h>
 int Factorial(int);    //Defination
 int main()
 {
	 int iNo=0,iRet=0;
	 printf("Enter number\n");
	 scanf("%d",&iNo);
	 
	 iRet=Factorial(iNo);
	 
	 printf("Factorial is: %d\n",iRet);
	 
	 
	 return 0;
 }
 int Factorial(int iValue)   //Defination
 {
	 int ifact=1;      //we can change as per requirement                              //isum=1
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
 
 