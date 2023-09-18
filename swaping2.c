#include<stdio.h>
#include<conio.h>
int main ()
{
	int a=5, b=10;
	printf ("\tThe value of a=%d \t The value of b=%d",a,b);
	a=a+b; //a=5+10=15
	b=a-b; //b=15-10=5
	a=a-b; //a=15-5=10
	printf ("\tThe value of a=%d \t The value of b=%d",a,b);
	return 0;
}
