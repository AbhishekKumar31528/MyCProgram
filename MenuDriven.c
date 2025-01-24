/*
Menu Driven Program
*/
#include<stdio.h>
#include<process.h>
int main()
{
	int n1,n2,n3;
	int choice;
	char ch;
	do
	{
		system("cls");
	printf("\nMenu\n=============");
	printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit");
	printf("\nEnter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			//printf("\nYou have selected Addition");
			printf("\nEnter 1st number:");
			scanf("%d",&n1);
			printf("\nEnter 2nd number:");
			scanf("%d",&n2);
			n3=n1+n2;
			printf("\n%d+%d=%d",n1,n2,n3);
			break;
		case 2:
			printf("\nEnter 1st number:");
			scanf("%d",&n1);
			printf("\nEnter 2nd number:");
			scanf("%d",&n2);
			n3=n1-n2;
			printf("\n%d-%d=%d",n1,n2,n3);break;
		case 3:
			printf("\nEnter 1st number:");
			scanf("%d",&n1);
			printf("\nEnter 2nd number:");
			scanf("%d",&n2);
			n3=n1*n2;
			printf("\n%d*%d=%d",n1,n2,n3);break;
		case 4:
			printf("\nEnter 1st number:");
			scanf("%d",&n1);
			printf("\nEnter 2nd number:");
			scanf("%d",&n2);
			if(n2==0)
			{
				printf("\nDivision by 0 is not possible.");
			}
			else
			{
				n3=n1/n2;
				printf("\n%d/%d=%d",n1,n2,n3);
			}break;
		case 5:
			printf("\nThank You");
			exit(0);
		default:
			printf("\nOOPs! You have selected an invalid option!");
	}
	printf("\nPress any key and enter to continue....");
	fflush(stdin);
	scanf("%c",&ch);
	}while(1);
	return 0;	
}
/*
1. WACP to perform the following temperature conversion
1. Cel to Fahre
2. Cel To Kel
3. Fah To Cel
4. Fah to Kel
5. Kel to Fah
6. Kel to cel
7. exit
2.WACP to perform the following conversion
Menu
------
1. Decimal To binary
2. Decimal To Octal
3. Decimal To Hexa
4. Decimal to All
5. Exit

3. WACP to perform following operation
Menu
---------
1. Area of Square
2. Area of Rectangle
3. Area of Triangle
4. Area of circle
5. Exit
*/

