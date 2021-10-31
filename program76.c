#include<stdio.h>
int Addition(int *Brr,int iSize)
//int Addition(int Brr[],int iSize)//Pointer ahe point krt ahe Arr
{
	int iSum=0,iCnt=0;
	for(iCnt=0;iCnt<iSize;iCnt++)
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
	iRet=Addition(Arr,5);//Arr=address nenar 100 brr kade   //Addition(100);
	
	
	
	printf("Addition is :%d\n",iRet);
	
	
	return 0;
}