#include<stdio.h>
#include<stdlib.h>
#define bool;


bool CheckPalindrom(char *str)
{
 
  char *end=NULL;
  bool flag=true;

 end=str;
 while(*end!='\0') //complexity N
 {
	 end++;
 }
 end--;

while(str<end) //Complixity N/2
{
	if(*start!=*end)
	{
		flag=false;
	    break;
	}
	str++;
	start--;
}

 
}
	
int main()
{
	char Arr[30];
	bool bRet=false;
	char cValue='\0';
	
	printf("Enter String\n");
	scanf("%[^'\n']s",Arr);
	bRet=CheckPalindrom(Arr);
	if(bRet==true)
	{
		printf("It is palindrom\n");
	}
	else
	{
		printf("It is not palindrom\n");
	}
	return 0;
}