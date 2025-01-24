/*2.WACP to perform the following conversion
Menu
------
1. Decimal To binary
2. Decimal To Octal
3. Decimal To Hexa
4. Decimal to All
5. Exit*/
#include<stdio.h>
#include<math.h>
#include<process.h>
#define SZ 32
int main()
{
	//Variable declaration
	int i,bin[SZ],oct[SZ],choice,n,x;
	char hexa[32];
	printf("\nMenu\n================");
	printf("\n1. Decimal To Binary\n2. Decimal To Octal\n3. Decimal To Hexadecimal\n4. Decimal To all\n5. Exit");
	printf("\nEnter Your Choice: ");
	scanf("%d",&choice);
	switch(choice)
	{

				//Enter Input From user
		case 1: printf("Please Enter any number: ");
				scanf("%d",&n);
				i=0; 
				x=abs(n);
				do
				{
					//Find remainder and store in array at ith element
					bin[i++]=x%2;
					
					//divide x by 2 and find quotent and store in x;
					x/=2;
				}
				while(x);
				for(x=i-1; x>=0; x--)
				printf("%d",bin[x]); break;
		case 2: printf("Enter Any number: ");
				scanf("%d",&n);
				i=0;
				x=abs(n);
				do
				{
					oct[i++]=x%8;
					x/=8;
				}while(x);
				for(x=i-1; x>=0; x--)
				printf("%d",oct[x]); break;
				
		case 3: printf("Enter any number: ");
				scanf("%d",&n);
				i=0; 
				x=abs(n);
				do
				{
					hexa[i++]=x%16;
					x/=16;
				}while(x);
				printf("Hexadecimal number is: ");
				for(x=i-1; x>=0; x--)
				{
					if(hexa[x]>=10)
					printf("%c",hexa[x]+55);
					else printf("%d",hexa[x]);
				}break;
		case 4: printf("Please Enter any number: ");
				scanf("%d",&n);
				i=0; 
				x=abs(n);
				do
				{
					bin[i++]=x%2;
					x/=2;
				}
				while(x);
				printf("Binary number is : ");
				for(x=i-1; x>=0; x--)
				printf("%d",bin[x]);
	
				i=0;
				x=abs(n);
				do
				{
					oct[i++]=x%8;
					x/=8;
				}while(x);
				printf("\nOctal number is : ");
				for(x=i-1; x>=0; x--)
				printf("%d",oct[x]); 
				
				i=0; 
				x=abs(n);
				do
				{
					hexa[i++]=x%16;
					x/=16;
				}while(x);
				printf("\nHexadecimal number is : ");
				for(x=i-1; x>=0; x--)
				{
					if(hexa[x]>=10)
					printf("%c",hexa[x]+55);
					else printf("%d",hexa[x]);
				}break;
		case 5: printf("\nThank You");
				exit(0);
		default : printf("\nSorry! You Have entered invalid option");
				  printf("\nThank you");
	}
	return 0;
}