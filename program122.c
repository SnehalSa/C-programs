#include<stdio.h>//Case Insensitive

int Count(char *str)
{
   int iCnt=0;
if(str==NULL)
{
return -1;
}
	while(*str!='\0')
	{
	if((*str=='A')||(*str=='E')||(*str=='I')||(*str=='O')||(*str=='U')||(*str=='a')||(*str=='e')||(*str=='i')||(*str=='o')||(*str=='u'))
	{
		iCnt++;
	}
	str++;
	}
	return iCnt;
}
	
int main()
{
	char Arr[30];
	int iRet=0;
	
	printf("Enter String\n");
	scanf("%[^'\n']s",Arr);
	
	iRet=Count(Arr);
	
	printf("Number of vowels are: %d\n",iRet);
	
	return 0;
}