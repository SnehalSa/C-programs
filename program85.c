#include<stdio.h>
#include<stdlib.h>
int Minimum(int Arr[], int iSize)
{
	int iSum=0,i=0,iMin=Arr[0];
	
	for(i=0;i<iSize;i++)
	{
		if(Arr[i]<iMin) 
		{
			iMin=Arr[i];
	    }
	}
	
	return iMin;
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
	
	
	iRet=Minimum(ptr,iLength);
	printf("Minimum number is :%d",iRet);
	free(ptr);
		
return 0;
}