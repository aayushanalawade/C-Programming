#include<stdio.h>
#include<conio.h>
int main ()
{
	int a[50],i,n,sum=0;
	printf ("Enter size of array");
	scanf("%d",&n);
	printf ("Enter element in array");
	for (i=0;i<=n-1;i++)
	{
		scanf ("%d",&a[i]);
	}
	printf ("Display array");
	for (i=0;i<=n-1;i++)
	{
	 printf ("%d\n",a[i]);
	sum= sum+a[i];
	}
		 printf ("%d\n",sum);
	return 0;
}
