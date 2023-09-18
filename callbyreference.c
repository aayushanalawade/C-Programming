#include<stdio.h>
#include<conio.h>
void add (int*);
int main ()
{
int a;
printf ("Enter 1 no");
scanf ("%d",&a);
add (&a);
return 0;
}
void add (int *a)
{
	printf ("The value of a=%d",*a);
}
