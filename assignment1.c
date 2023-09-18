#include<stdio.h>
#include<conio.h>
int main()
{
	int age;
	printf("Enter your age");
	scanf("%d",&age);
	if (age>=18)
	{
		printf("Age is valid");
	}
	else
	{
		printf("Age is invalid");
	}
}
