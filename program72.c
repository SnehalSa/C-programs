//Accept 5 number and perform addition with loop

#include<stdio.h>

int main()
{
	int Arr[5];  //Array of 5 integer
	
	int iSum=0;
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
	
	
	iSum=Arr[0]+iSum;
	iSum=Arr[1]+iSum;
	iSum=Arr[2]+iSum;
	iSum=Arr[3]+iSum;
	iSum=Arr[4]+iSum;
	
	printf("Addition is :%d\n",iSum);
	
	
	return 0;
}