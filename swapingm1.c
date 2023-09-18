#include<stdio.h>
#include<conio.h>
int main ()
{
	int x=9, y=12, z;
	printf ("\nValue of x=%d \nValue of y=%d",x,y,z);
	z=x;
	x=y;
	y=z;
	printf ("\nValue of x=%d \nValue of y=%d",x,y,z);
	return 0;	
}

