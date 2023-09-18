#include<stdio.h>
#include<conio.h>
void add ();
void sub ();
void mul ();
void div ();
int main()
{
	add();
	sub();
	mul();
	div();
	return 0;
}
void add()
{
	int a=10, b=20;
	printf ("The Addition is=%d",a+b);
}
void sub()
{
	int a=10, b=20;
	printf ("\tThe Substraction is=%d",b-a);
}
void mul()
{
	int a=10, b=20;
	printf ("\tThe Multiplication is=%d",a*b);
}
void div()
{
	int a=10, b=20;
	printf ("\tThe Division is=%d",b/a);
}
