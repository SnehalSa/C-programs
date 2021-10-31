#include<stdio.h>
#include<stdlib.h>


bool CheckPalindrom(char *str)
{
  char *start=NULL;
  char *end=NULL;
 start=str;
 end=str;
 while(*end!='\0') //complexity N
 {
	 end++;
 }
 end--;

while(start<end) //Complixity N/2
{
	if(*start!=*end)
	{
		break;
	}
	start++;
	start--;
}
if(start<end)
{
	return false;
}
else
{
	return true;
}
 
}
	
int main()
{
	char Arr[30];
	bool BRet=false;
	char cValue='\0';
	
	printf("Enter String\n");
	scanf("%[^'\n']s",Arr);
	BRet=CheckPalindrom(Arr);
	if(BRet==true)
	{
		printf("It is palindrom\n");
	}
	else
	{
		printf("It is not palindrom\n");
	}
	return 0;
}