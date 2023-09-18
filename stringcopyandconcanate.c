#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char name[20]="Hello",name1 [20];
	char name2 [20]="Sham";
	
	strcpy (name1,name);
	printf ("Copy case=%s",name1);
	printf ("Concanate case=%s",strcat(name,name2));
	
	return 0;
}
