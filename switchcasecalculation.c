#include<stdio.h>
#include<conio.h>
int main ()
{
	int a,b,c;
	printf ("Enter your choice\n 1. Addition\n 2. Substraction\n 3. Multiplication\n 4. Division\n 5. Percentage");
	scanf ("%d",&a);
	switch (a)
	{
		case 1 : printf("Addition=%d",b+c);
		    scanf ("%d%d",&b,&c);
		break;
		case 2 : printf("Substraction=%d",c-b);
			scanf ("%d%d",&b,&c);
		break;
		case 3 : printf("Multiplication=%d",c*b);
			scanf ("%d%d",&b,&c);
		break;
		case 4 : printf("Division=%d",c/b);
			scanf ("%d%d",&b,&c);
		break;
		case 5 : printf("Percentage=%d",b%c);
			scanf ("%d%d",&b,&c);
		break;
		default : printf("Invalid Choice");
	}
	return 0;
}
