#include <stdio.h>
#include <conio.h>
int main ()
{
	int i,j;
	for (i=0; i<=4; i++)
	{
		for (j=0; j<=4; j++)
		{
			if (j==0 || i==0  || i==2 || i==4)
			{
				printf ("$");
			}
			else
			{
				printf (" ");
			}
		}
		printf ("\n");	
	}
	return 0;
}
