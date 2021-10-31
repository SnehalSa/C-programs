//implement your own swap function
#include<stdio.h>
void Swap(char *p,char *q)
{
	char temp;
	
	temp=*p;
	*p=*q;
	*q=temp;
}
int main()
{
	char ch1,ch2;
	
	printf("Enter first element\n");
	scanf("%c",&ch1);
	
	printf("Enter secound element\n");
	scanf(" %c",&ch2);
	
	printf("swapping character before %c %c\n",ch1,ch2);
	
	Swap(&ch1,&ch2);
	
	printf("swapping character after %c %c\n",ch1,ch2);
	
	return 0;
	
}
	
	