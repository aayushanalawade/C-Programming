#include <stdio.h>
#include <conio.h>
int main ()
{
	int ch,id;
	FILE *fp;
	char a;
	printf ("Enter your choice\n 1. Read\n 2. Write\n 3. Append\n");
	scanf ("%d",&ch);
	switch (ch)
	
	{
		case 1 : 
			fp= fopen("hello.txt","r");
			a= fgetc (fp);
			while (a!=EOF)
			{
				printf ("%c",a);
				a= fgetc (fp);
			}
			fclose(fp);
			break;
		case 2 : 
			fp= fopen("hello1.txt","w");
			printf ("Enter id");
			scanf  ("%d",&id);
			printf ("The value of a=%d",id);
			fprintf (fp,"The value of a=%d\n",id);
			printf ("File write successfully!!!");
			fclose (fp);
			break;
		case 3 : 	
			fp= fopen("hello1.txt","a");
			printf ("Enter a");
			scanf  ("%d",&id);
			printf ("The value of a=%d",id);
			fprintf (fp,"The value of a=%d\n",id);
			printf ("File write successfully!!!");
			fclose (fp);
			break;
		default : printf("Invalid Choice");
	}
	return 0;
}
