#include<stdio.h>
#include<conio.h>
int main()
{
int a[100],i,n;
printf ("How many elements you want to enter");
scanf ("%d",&n);
printf ("Enter elements in Array a");
for (i=0;i<=n-1;i++)
    {
    	scanf("%d",&a[i]);
    }
	printf ("Display Array a elements\n");
	for (i=0;i<=n-1;i++)
	{
		printf ("%d",a[i]);
	}	
	return 0;	
}
