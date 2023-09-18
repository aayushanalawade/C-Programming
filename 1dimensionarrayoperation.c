#include<stdio.h>
#include<conio.h>
int main ()
{
	int a[100], b[100], i,n;
	printf ("How many elements you want to enter");
	scanf ("%d",&n);
	printf ("Enter array element in a");
	for (i=0;i<=n-1;i++)
	{
		scanf ("%d", &a[i]);
	}
	printf ("Enter array element in b");
	for (i=0;i<=n-1;i++)
	{
		scanf ("%d", &b[i]);
	}
	printf ("Addition of array a and b");
	for (i=0;i<=n-1;i++)
	{
		printf ("%d\n",a[1]+b[1]);
	}
	printf ("Substraction of array a and b");
	for (i=0;i<=n-1;i++)
	{
		printf ("%d\n",a[1]-b[1]);
	}
	printf ("Multiplication of array a and b");
	for (i=0;i<=n-1;i++)
	{
		printf ("%d\n",a[1]*b[1]);
	}
	printf ("Division of array a and b");
	for (i=0;i<=n-1;i++)
	{
		printf ("%d\n",a[1]/b[1]);
	}
	return 0;
}
