//Accept 5 number and perform addition with loop

#include<stdio.h>

int main()
{
	int Arr[5];  //Array of 5 integer
	
	int iSum=0; int i=0;
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
	
	for(i=0;i<5;i++)
	{
	iSum=iSum+Arr[i];
	}
	
	printf("Addition is :%d\n",iSum);
	
	
	return 0;
}