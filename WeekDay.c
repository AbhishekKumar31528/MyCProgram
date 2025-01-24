//WACP that will accep weeek number and print the name of day 
#include<stdio.h>
int main()
{
	
int wn;
printf("Enter the week day number:");
scanf("%d",&wn);
switch(wn)
{
	case 1:printf("\nSunday");
	case 2:printf("\nMonday");
	case 3:printf("\nTuesday");
	case 4:printf("\nWednesday");
	case 5:printf("\nThursday");
	case 6:printf("\nFriday");
	case 7:printf("\nSaturday");break;
	default:printf("\nInvalid week day number.");
}
return 0;
}