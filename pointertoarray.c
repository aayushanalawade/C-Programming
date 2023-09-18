#include<stdio.h>
#include<conio.h>
int main ()
{
	int a[5]={10,20,30,40,50},*b[5],i;
	for (i=0;i<=4;i++)
	{
		printf ("%d",a[i]);
		b[i]=&a[i];
	}
	printf ("Display address\n");
	for (i=0;i<=4;i++)
	{
		printf ("%d\n",b[i]);
		printf ("%d\n",*b[i]);
	}
}
