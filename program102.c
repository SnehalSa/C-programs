#include<stdio.h>

void Display(char *Brr)
{
	printf("%c\n",*Brr);
	Brr++;
	printf("%c\n",*Brr);
	Brr++;
	printf("%c\n",*Brr);
	Brr++;
	printf("%c\n",*Brr);
	Brr++;
	printf("%c\n",*Brr);
	Brr++;
}

int main()
{
	char Arr[20];
	
	printf("Enter your name\n");
	scanf("%[^'\n']s",Arr); //Regular regects
	Display(Arr);//Display(40) base address




	
	
	
	return 0;
}