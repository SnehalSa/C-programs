#include<stdio.h>

void Count(char *str) 
{
	int iCount=0,iCnt=0;
	
	while(*str!='\0')
	{
		if((*str>='A')&&(*str<='Z'))
		{
			iCount++;
		}
		else if((*str>='a')&&(*str<='z'))
		{
			iCnt++;
		}
		
		str++;
	}
	printf("Small letters are:%d\n",iCnt);
	printf("Capital letters are:%d\n",iCount);
	
}
int main()
{
	char Arr[20];
	int iRet=0;
	
	printf("Enter string\n");
	scanf("%[^'\n']s",Arr);
	
	Count(Arr);//strlenX(50)
	
	
	return 0;
}
