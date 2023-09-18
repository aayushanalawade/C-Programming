#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	int n;
	char name [100]="Ram";
	n=strlen(name);
	printf("\nReverse Case is = %s",strrev(name));
	
	return 0;
}
