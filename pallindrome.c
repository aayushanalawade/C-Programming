#include<stdio.h>
#include<conio.h>
int main ()
{
	int no=121, re, sum=0,temp;
	temp=no;
	while (no>0)
	{
		re=no%10;
		sum=sum*10+re;
		no=no/10;
	}
	if (temp==sum)
	{
		printf ("No is palindrome");
	}
	else
	{
		printf ("No is not a palindrome");
	}
	return 0;
}
