#include <stdio.h>
#include <conio.h>
struct emp
{
	int a;
	char b;
}s1,s2;
int main ()
{
	s1.a=10;
	printf ("The value of a is = %d",s1.a);
	printf ("Size of structure is=%d",sizeof(s1));
	return 0;
}
