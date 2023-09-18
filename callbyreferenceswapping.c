#include<stdio.h>
#include<conio.h>
void add (int*,int*);
int main ()
{
	int a,b;
	printf ("Enter 2 Numbers");
	scanf("%d%d",&a,&b);
	printf ("\tThe value of a=%d \t The value of b=%d",a,b);
	add (&a,&b);
	return 0;
}
void add (int *a,int *b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c; 
	printf ("\tThe value of a=%d \t The value of b=%d",*a,*b);
}
