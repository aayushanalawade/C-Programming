#include<stdio.h>
#include<conio.h>
void add (int *);
int main ()
{
int a;
printf ("Enter  1 no.");
scanf ("%d",&a);
add(&a);
return 0;
}
void add (int *a)
{
	int  re, sum=0,temp;
	temp=*a;
	while(*a>0)
    {
		re=*a%10;
		sum=sum+re*re*re;
		*a=*a/10;
	}
	if (temp==sum)
	{
		printf ("It's an Armstrong Number");
	}
	else
	{
		printf ("It's not an Armstrong Number");
    }
}
