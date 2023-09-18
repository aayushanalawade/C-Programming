#include<stdio.h>
#include<conio.h>
void add (int*,int*);
int main ()
{
	int a,b;
	printf("Enter 2 no");
	scanf("%d%d",&a,&b);
	add (&a,&b);
}
void add (int *a,int *b)
{
	if (*a>*b)
	{
		printf("a is greater than b");
	}
	else
	{
		printf("b is greater than a");
    }
}
