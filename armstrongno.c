#include<stdio.h>
#include<conio.h>
int main ()
{
	int no=370, re, sum=0,temp;
	temp=no;
	while (no>0)
	{
		re=no%10;
		sum=sum+re*re*re;
		no=no/10;
	}
	if (temp==sum)
	{
		printf ("No is an Armstrong");
	}
	else
	{
		printf ("No is not an Armstrong");
	}
	return 0;
}
