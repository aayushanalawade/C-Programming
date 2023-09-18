#include<stdio.h>
#include<conio.h>
int main ()
{
	int a=10,*ptr;
	ptr=&a;
	printf ("a=%d\n",a);
	printf ("address=%d(or)%w\n",ptr);
	printf ("Value=%u\n",*ptr);

return 0;
}
