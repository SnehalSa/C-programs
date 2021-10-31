#include<stdio.h>
#include<stdlib.h>
int Differenc(int Arr[], int iSize)
{
	int iSum=0,i=0,iMin=Arr[0],iMax=Arr[0],iDiff=0;
	
	for(i=0;i<iSize;i++)
	{
		if(Arr[i]<iMin) 
		{
			iMin=Arr[i];
	    }
		else if(Arr[i]>iMax)
		{
			iMax=Arr[i];
		}
	}
	iDiff=iMax-iMin;
	
	return iDiff;
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
	
	
	iRet=Differenc(ptr,iLength);
	printf("Differenc is :%d",iRet);
	free(ptr);
		
return 0;
}