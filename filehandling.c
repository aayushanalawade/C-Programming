#include <stdio.h>
#include <conio.h>
int main ()
{   
	FILE *fp;
	char ch;
	fp= fopen("hello.txt","r");
	ch= fgetc (fp);
	while (ch!=EOF)
	{
		printf ("%c",ch);
		ch= fgetc (fp);
	}
	fclose(fp);
	return 0;
}
