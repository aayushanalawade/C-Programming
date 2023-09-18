#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	int n;
	char name [100]="Ram";
	n=strlen(name);
	printf("\nUpper Case is = %s",strupr(name));
	
	return 0;
}
