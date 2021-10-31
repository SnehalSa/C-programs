#include<stdio.h>
#include<stdlib.h>
int  CountEven(int Arr[], int iSize)
{
	int iSum=0,i=0;
	int iCount=0;
	for(i=0;i<iSize;i++)
	{
		if((Arr[i]%2)==0)
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
	iRet=CountEven(ptr,iLength);
	printf("Number of Even elements are is:%d\n",iRet);
	free(ptr);
		
return 0;
}