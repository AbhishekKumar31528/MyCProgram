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
	{
		printf("January\n");
		printf("Number of days:1");
	}
	else if(n==2)
	{
		printf("february\n");
		printf("Number of days:32");
	}
		
	else if(n==3)
	{
		printf("March\n");		
		printf("Number of days:60");
	}	
		
	else if(n==4)
	{
		printf("April\n");
		printf("Number of days:91");
			
	}
		
	else if(n==5)
	{
		printf("May\n");
		printf("Number of days:121");
	}
		
	else if(n==6)
	{
		printf("June\n");
		printf("Number of days:152");
	}
		
	else if(n==7)
	{
		printf("July\n");
		printf("Number of days:182");
	}
		
	else if(n==8)
	{
		printf("August\n");
		printf("Number of days:213");
	}
		
	else if(n==9)
	{
		printf("Setember\n");
		printf("Number of days:244");
	}
		
	else if(n==10)
	{
		printf("October\n");
		printf("Number of days:274");
	}
		
	else if(n==11)
	{
		printf("November\n");
		printf("Number of days:305");
	}
		
	else
	{
		printf("December\n");	
		printf("Number of days:335");
	}
	
}