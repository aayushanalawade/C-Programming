#include<stdio.h>
#include<conio.h>
int main ()
{
	int a=10, *ptr, **ptr2;
	ptr=&a;
	ptr2=&ptr;
	printf ("%d",a);
	printf ("%d",&a);
	printf ("%d",ptr);
	printf ("%d",*ptr);
	printf ("%d",ptr2);
	printf ("%d",*ptr2);
	printf ("%d",**ptr2);
	
	return 0;
}
