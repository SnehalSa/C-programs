#include<stdio.h>
#include<stdlib.h>


bool CheckPalindrom(char *str)
{
  char *start=NULL;
  char *end=NULL;
  bool flag=true;
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
		flag=false;
	    break;
	}
	start++;
	start--;
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