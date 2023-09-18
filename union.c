#include <stdio.h>
#include <conio.h>
union emp
{
	int a;
	char b;
}e1,e2;
int main ()
{
	e1.a=10;
	printf ("The value of a=%d",e1.a);
	printf ("Union size=%d",sizeof (e1));
	return 0;
}
