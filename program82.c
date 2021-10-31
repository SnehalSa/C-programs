#include<stdio.h>
#include<stdlib.h>
int Count(int Arr[], int iSize)
{
	int iSum=0,i=0,iCount=0;
	
	for(i=0;i<iSize;i++)
	{
		if((Arr[i])>10) 
		{
	         iCount++;
		}
	}
	
	return iCount;
}
	
	
int main()
{
	int iLength=0,i=0;
	int iRet=0;
	int *ptr=NULL;
	printf("Enter number of elements\n");
	scanf("%d",&iLength);
	
	ptr=(int*)malloc(sizeof(int)*iLength);
	
	printf("Enter elements\n");
	for(i=0;i<iLength;i++)
	{
		scanf("%d",&ptr[i]);
	}
	printf("Enter data is:");
	for(i=0;i<iLength;i++)
	{
		printf("%d\t",ptr[i]);
	}
	iRet=Count(ptr,iLength);
	printf("Number is greter than 10 is its count is",iRet);
	free(ptr);
		
return 0;
}