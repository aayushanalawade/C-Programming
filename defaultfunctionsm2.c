#include<stdio.h>
#include<conio.h>
void div ()
{
	int a,b;
	printf ("Enter 2 Values");
	scanf  ("%d%d",&a,&b);
	printf ("%d\t%d\t%d\t%d",a+b,b-a,a*b,b/a);
}
int main()
{
	div ();
	return 0;
}

