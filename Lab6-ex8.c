#include<stdio.h>
#include<string.h>
#include<malloc.h>
int main(void)
{
	char s[50]; // Made into an array of size 50 
	char *dyn_s;
	//s = malloc( 50 * sizeof( char) );
	int ln;
	printf("Enter the input string\n");
	scanf("%s",&s);
	ln = strlen(s);
	dyn_s = (char*)malloc(strlen(s)+1); // removed '*'
	dyn_s = s;
	dyn_s[strlen(s)]='\0';
	printf(dyn_s);
	return 0;
}

