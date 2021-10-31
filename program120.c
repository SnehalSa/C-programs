#include<stdio.h>

int  SpaceCount(char *str) 
{
	int iCount=0,iCnt=0;
	
	while(*str!='\0')
	{
		if(*str==' ')
		{
		  iCnt++;
		}
		str++;
	}
	return iCnt;
	
}
int main()
{
	char Arr[20];
	int iRet=0;
	
	printf("Enter string\n");
	scanf("%[^'\n']s",Arr);
	
	iRet=SpaceCount(Arr);//strlenX(50)
	printf("Space are :%d\n",iRet);
	
	
	return 0;
}
