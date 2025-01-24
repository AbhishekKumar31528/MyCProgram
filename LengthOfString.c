/*
Finding length of string
----------------------------
Length of string-> Number of characters in String
ex:
"Sandeep" -> its length is 7
"Rupali Verma" ->its length is 12

WACP that will accept any string and fint length of string.
Soln: Find the position of null in character array
*/
#include<stdio.h>
int main()
{
	char name[30];
	int i;
	printf("Enter any string:");
	gets(name);
	//find the length of string
	//find the position if null in name array
	for(i=0;name[i]!=NULL;i++);
	printf("\nYou have entered %s, it has %d characte(s)",name,i);
	return 0;
}

/* WACP in which accept any three string and print all string in ascending order according to length
ex:
Ravi
Raj Kishore
Raj

Output:
Raj
Ravi
Raj Kishore
*/
