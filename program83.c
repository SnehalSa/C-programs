#include<stdio.h>
#include<stdlib.h>
int Count(int Arr[], int iSize)
{
	int iSum=0,i=0,iCount=0;
	
	for(i=0;i<iSize;i++)
	{
		if((Arr[i])>10&&(Arr[i]<20)) 
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
	printf("Count is%d",iRet);
	free(ptr);
		
return 0;
}