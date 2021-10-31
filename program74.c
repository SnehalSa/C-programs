//Accept 5 number and perform addition with function and loop

#include<stdio.h>

int Addition(int Brr[])//Pointer ahe point krt ahe Arr
{
	int iSum=0,iCnt=0;
	for(iCnt=0;iCnt<5;iCnt++)
	{
		iSum=iSum+Brr[iCnt];
	}
	return iSum;
}





int main()
{
	int Arr[5];  //Array of 5 integer
	
	int iSum=0;  int iRet=0;
	int iCnt=0;
	printf("Enter numbers\n");
	
	
	
	
	/*scanf("%d",&Arr[0]);
	scanf("%d",&Arr[1]);
	scanf("%d",&Arr[2]);
	scanf("%d",&Arr[3]);
	scanf("%d",&Arr[4]);*/
	
	
	for(iCnt=0;iCnt<5;iCnt++)
	{
		scanf("%d",&Arr[iCnt]);
		
	}
	iRet=Addition(Arr);//Arr=address nenar 100 brr kade
	
	
	
	printf("Addition is :%d\n",iRet);
	
	
	return 0;
}