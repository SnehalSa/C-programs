#include<stdio.h>
#include<stdlib.h>
int Addition(int *Brr,int iSize)
//int Addition(int Brr[],int iSize)//Pointer ahe point krt ahe Arr
{
	int iSum=0,iCnt=0;
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		iSum=iSum+(*Brr);
		Brr++;
	}
	return iSum;
}





int main()
{
	int *Arr=NULL;  
	
	int iSum=0;  int iRet=0; int iLength=0;
	int iCnt=0;
	printf("Enter number of elements\n");
	scanf("%d",&iLength);
	
	
	
	Arr=(int*)malloc(sizeof(int)*iLength);
	printf("Enter numbers\n");
	
		
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		scanf("%d",&Arr[iCnt]);
		
	}
	iRet=Addition(Arr,iLength);
	
	printf("Addition is :%d\n",iRet);
	free(Arr);
	
	
	return 0;
}