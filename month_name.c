/* C program that will accept month number and print name of that month */
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the month number:");
	scanf("%d",&n);
	if(n==0 || n>12)
	{
		printf("sorry! you enter the invalid month number.");
		return 0;
	}
	if(n==1)
		printf("January");
	else if(n==2)
		printf("february");
	else if(n==3)	
		printf("March");
	else if(n==4)
		printf("April");	
	else if(n==5)
		printf("May");
	else if(n==6)
		printf("June");
	else if(n==7)
		printf("July");
	else if(n==8)
		printf("August");
	else if(n==9)
		printf("Setember");
	else if(n==10)
		printf("October");
	else if(n==11)
		printf("November");
	else
	printf("December");		
}