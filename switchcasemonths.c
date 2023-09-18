#include<stdio.h>
#include<conio.h>
int main ()
{
	int a;
	printf ("Enter your choice\n 1. Jan\n 2. Feb\n 3. Mar\n 4. Apr\n 5. May\n 6. June\n 7. July\n 8. Aug\n 9. Sept\n 10. Oct\n 11. Nov\n 12. Dec");
	scanf ("%d",&a);
	switch (a)
	{
		case 1 : printf("Jan");
		break;
		case 2 : printf("Feb");
		break;
		case 3 : printf("Mar");
		break;
		case 4 : printf("Apr");
		break;
		case 5 : printf("May");
		break;
		case 6 : printf("June");
		break;
		case 7 : printf("July");
		break;
		case 8 : printf("Aug");
		break;
		case 9 : printf("Sept");
		break;
		case 10 : printf("Oct");
		break;
		case 11 : printf("Nov");
		break;
		case 12 : printf("Dec");
		break;
		default : printf("Invalid Choice");
	}
	return 0;
}
