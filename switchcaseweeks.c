#include<stdio.h>
#include<conio.h>
int main ()
{
	int a;
	printf ("Enter your choice\n 1. Monday\n 2. Tuesday\n 3. Wednesday\n 4. Thursday\n 5. Friday\n 6. Saturday\n 7. Sunday");
	scanf ("%d",&a);
	switch (a)
	{
		case 1 : printf("Monday");
		break;
		case 2 : printf("Tuesday");
		break;
		case 3 : printf("Wednesday");
		break;
		case 4 : printf("Thursday");
		break;
		case 5 : printf("Friday");
		break;
		case 6 : printf("Saturday");
		break;
		case 7 : printf("Sunday");
		break;
		default : printf("Invalid Choice");
	}
	return 0;
}
