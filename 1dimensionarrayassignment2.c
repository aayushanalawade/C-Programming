#include<stdio.h>
#include<conio.h>
int main ()
{
	int a[5]={10,20,30,40,50},i,sum=0;
	printf ("Value Print");
	for (i=0;i<=4;i++)
	{
		sum=sum+a[i];
	}
	printf ("%d\n",sum);
	return 0;
}
