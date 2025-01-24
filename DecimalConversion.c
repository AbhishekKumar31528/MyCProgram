/*Q2).WACP to perform the following conversion
Menu
------
1. Decimal To binary
2. Decimal To Octal
3. Decimal To Hexa
4. Decimal to All
5. Exit
*/
#include<stdio.h>
#include<process.h>
int main()
{
	//variable decleratin
	int num,xnum,choice,arr[32],arr1[32],arr2[32],i;
	char ch;
	
	do
	{
		system("cls");
		printf("\nMenu\n========");
		printf("\n1. Decimal to Binary\n2. Decimal to Octal\n3. Decimal to Hexa\n4. Decimal to All\n5. Exit");
		printf("\nPlease enter your choice: ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				//Decimal To binary
				printf("\nEnter the number: ");
				scanf("%d",&num);
				i=0;
				do
				{
					arr[i++]=num%2;
					num/=2;	
				}while(num);
				
				printf("\nBinary = ");
				//traverse the array in reverse order to get the binary
				for(num=--i;num>=0;num--)
				printf("%d",arr[num]);
				break;
			case 2:
				//Decimal To Octal
				printf("\nEnter the number: ");
				scanf("%d",&num);
				i=0;
				do
				{
					arr[i++]=num%8;
					num/=8;
				}while(num);
				
				printf("\nOctal = ");
				//traverse the array in reverse order to get the octal
				for(num=--i;num>=0;num--)
				printf("%d",arr[num]);
				break;
			case 3:
				//Decimal To Hexa
				printf("\nEnter the number: ");
				scanf("%d",&num);
				i=0;
				do
				{
					arr[i++]=num%16;
					num/=16;
				}while(num);
				
				printf("\nHexa = ");
				//traverse the array in reverse order to get the Hexa
				for(num=--i;num>=0;num--)
				{
					if(arr[num]==10)
					printf("A");
					else if(arr[num]==11)
					printf("B");
					else if(arr[num]==12)
					printf("C");
					else if(arr[num]==13)
					printf("D");
					else if(arr[num]==14)
					printf("E");
					else if(arr[num]==15)
					printf("F");
					else
					printf("%d",arr[num]);	
				}
				break;
			case 4:
				//Decimal to All
				printf("\nEnter the number: ");
				scanf("%d",&num);
				
				//Decimal To binary
				i=0;
				xnum=num;
				do
				{
					arr[i++]=xnum%2;
					xnum/=2;	
				}while(xnum);
				
				printf("\nBinary = ");
				//traverse the array in reverse order to get the binary
				for(xnum=--i;xnum>=0;xnum--)
				printf("%d",arr[xnum]);
				
				//Decimal To Octal
				i=0;
				xnum=num;
				do
				{
					arr1[i++]=xnum%8;
					xnum/=8;
				}while(xnum);
				
				printf("\nOctal = ");
				//traverse the array in reverse order to get the octal
				for(xnum=--i;xnum>=0;xnum--)
				printf("%d",arr1[xnum]);
				
				//Decimal To Hexa
				i=0;
				xnum=num;
				do
				{
					arr2[i++]=xnum%16;
					xnum/=16;
				}while(xnum);
				
				printf("\nHexa = ");
				//traverse the array in reverse order to get the Hexa
				for(xnum=--i;xnum>=0;xnum--)
				{
					if(arr2[xnum]==10)
					printf("A");
					else if(arr2[xnum]==11)
					printf("B");
					else if(arr2[xnum]==12)
					printf("C");
					else if(arr2[xnum]==13)
					printf("D");
					else if(arr2[xnum]==14)
					printf("E");
					else if(arr2[xnum]==15)
					printf("F");
					else
					printf("%d",arr2[xnum]);
				}
				break;
			case 5:
				//exit
				printf("\nThank you.");
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