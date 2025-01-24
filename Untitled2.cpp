//WACP that will accep weeek number and print the name of day 
#include<stdio.h>
int main()
{
	
int wn;
printf("Enter the week day number:");
scanf("%d",&wn);
switch(wn)
{
	case 1:printf("/nSunday");break;
	case 2:printf("/nMonday");break;
	case 3:printf("/nThuesday");break;
	case 4:printf("/nWednesday");break;
	case 5:printf("/nTuesday");break;
	case 6:printf("/nFriday");break;
	case 7:printf("/nSaturday");break;
	default:printf("\nInvalid week day number.");
}
return 0;
}