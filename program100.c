#include<stdio.h>

void Display(char Brr[])
{
	printf("Name is %s\n",Brr);
}

int main()
{
	char Arr[20];
	
	printf("Enter your name\n");
	scanf("%[^'\n']s",Arr); //Regular regects
	Display(Arr);




	
	
	
	return 0;
}