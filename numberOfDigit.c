/*
WACP that will accept a number and print total number of 
digit in that number
*/
#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	char s[50];
	int nd;
	printf("Enter any number:");;
	scanf("%d",&n);
	//convert n in string
	sprintf(s,"%d",n);
	nd=strlen(s);
	printf("\nYou have entered %d, it has %d digit(s)",n,nd);
	return 0;
}
