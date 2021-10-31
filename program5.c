/////////////////////////////                     factorial
//  input=5                                         input=5
//  output=15                                        output=1*2*3*4*5
// input=3
// output=6
/////////////////////////////


#include<stdio.h>
 int Addition(int);    //Defination
 int main()
 {
	 int iNo=0,iRet=0;
	 printf("Enter number\n");
	 scanf("%d",&iNo);
	 
	 iRet=Addition(iNo);
	 
	 printf("Addition is: %d\n",iRet);
	 
	 
	 return 0;
 }
 int Addition(int iValue)   //Defination
 {
	 int isum=0;                                   //isum=1
	 int iCnt=0;
	 if(iValue<0) ////updater//filter
   {
	  iValue=-iValue; 
   }
	 
	 //   1          2           3
	 for(iCnt=1;iCnt<=iValue;iCnt++)
	 {
		isum=isum+iCnt; // 4 assignment /initialisatin statement Rhs=Lhs  isum=isum*iCnt
		
	 }
	 return isum;
	 
	 
 }
 
 