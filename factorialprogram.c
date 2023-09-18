#include<stdio.h>
#include<conio.h>
int main()
{
	int i, fact=1, n=6;
	
	for (i=1; i<=n; i++)
	{
		fact=fact*i;
	}
	printf ("The Factorial is=%d",fact);
	
	return 0;
}
