#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d,e;
	printf("Enter 3 no");
	scanf("%d%d%d",&a,&b,&c);
	d=a+b+c;
	printf("The total is =%d",d);
	e=d/3;
	printf("The average is =%d",e);
	if(e>85)
	{
		printf("A Grade");
	}
	else if(e>75)
	{
		printf("B Grade");
	}
	else if(e>35)
	{
		printf("C Grade");
	}
	else
	{
		printf("Fail");
	}
}
