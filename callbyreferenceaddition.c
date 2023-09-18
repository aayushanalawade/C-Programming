#include<stdio.h>
#include<conio.h>
void add (int *,int *);
int main ()
{
	int a,b;
	printf("Enter 2 no");
	scanf("%d%d",&a,&b);
	add (&a,&b);
	return 0;
}
void add (int *a,int *b)
{
	printf ("The Addition is=%d",*a+*b);
}
