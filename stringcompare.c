#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	int i;
	char name[100]="Hello",name1[100]="Hello";
	i=strcmp (name,name1);
	if (i==0)
	{
		printf("Name and Name are True");
	}
	else
	{
		printf("Name and Name are False");
	}
	
	return 0;
}
