#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("Enter 3 no");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		printf("a is greater");
	}
	else if(b>c)
	{
		printf("b is greater");
	}
	else
	{
		printf("c is greater");
	}
}
