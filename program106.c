///Accept string from user and implemet strlen function of your own
#include<stdio.h>
typedef unsigned int UINT;
UINT strlenX(char *str) //ponter addressnghet ahe
{
	int iCnt=0;
	if(str==NULL)  //avoid segmentation fault//runtime accident user may be differnt
	{
		return 0;
	}
	
	while(*str!='\0')
	{
		iCnt++;
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
	
	iRet=strlenX(Arr);//strlenX(50)
	printf("Length of string is:%d\n",iRet);
	return 0;
}
