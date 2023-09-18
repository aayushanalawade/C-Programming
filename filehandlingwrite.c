#include <stdio.h>
#include <conio.h>
int main ()
{
	FILE *fp;
	int id;
	fp= fopen("hello1.txt","a");
	printf ("Enter id");
	scanf  ("%d",&id);
	printf ("The value of a=%d",id);
	fprintf (fp,"The value of a=%d\n",id);
	printf ("File write successfully!!!");
	fclose (fp);
	return 0;
}
