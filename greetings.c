/* --------------------------------------------------
 * Project: Graphical greetings message
 * Student: Archana Kalathil Venu
   --------------------------------------------------

*including library files*/
#include<stdio.h>
#include<string.h>

/*defining main function*/
void main()
{
	/*declaring variables*/
	char name[20];
	char s1[30]="Greetings";
	int l,l1,i;

	/*receiving the name as input*/
	printf("Enter your name : ");
	scanf("%s",name);

	/*concatenating the message to be shown*/
	strcat(s1,",");
	strcat(s1,name);

	/*calculating the length of the message*/
	l=strlen(s1);
	l1=l+10;

	/*printing first line*/
	for(i=0;i<l1;i++)
		printf("*");

	/*printing second line*/
	printf("\n\n*");
	for(i=2;i<l1;i++)
		printf(" ");
	printf("*");

	/*printing third line*/
	printf("\n\n*");

	for(i=0;i<4;i++)
		printf(" ");

	printf("%s",s1);

	for(i=0;i<4;i++)
		printf(" ");

	printf("*");

	/*printing forth line*/
	printf("\n\n*");
	for(i=2;i<l1;i++)
		printf(" ");
	printf("*\n\n");

	/*printing fifth line*/
	for(i=0;i<l1;i++)
		printf("*");

}
