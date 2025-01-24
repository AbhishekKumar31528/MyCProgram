//WACP that will accep weeek number and print the name of day in reverce order
#include<stdio.h>
int main()
{
	
int wn;
printf("Enter the week day number:");
scanf("%d",&wn);
switch(wn)
{
	case 7:printf("\nSaturday");
	case 6:printf("\nFriday");
	case 5:printf("\nThursday");
	case 4:printf("\nWednesday");
	case 3:printf("\nTuesday");
	case 2:printf("\nMonday");
	case 1:printf("\nSunday");break;
	default:printf("\nInvalid week day number.");
}
return 0;
}