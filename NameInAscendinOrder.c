/*WACP that will accept 10 names and print all names in ascending order*/
#include<stdio.h>
#include<string.h>
int main()
{
	//Variable declaration
	char name1[10][50],name2[10][50];
	char temp[50];
	int i,j,c;
	
	//Accept input from user
	for(i=0; i<10; i++)
	{
		printf("Enter name %d:",i+1);
		gets(name1[i]);
	}
	//Code for copy name2 in name1
	for(i=0; i<10; i++)
	{
		strcpy(name2[i],name1[i]);
	}
	
	
	//Code for ascending string 
	for(i=0; i<10-1; i++)
	{
		for(j=i+1; j<10; j++)
		{
			c=strcmp(name2[i],name2[j]);
			if(c>0)
			{
				strcpy(temp,name2[i]);
				strcpy(name2[i],name2[j]);
				strcpy(name2[j],temp);
			}
		}
	}
	//Display result
	system("cls");
	printf("\nYou have entered string: \n");
	for(i=0; i<10; i++)
	{
		printf("%s\n",name1[i]);
	}
	
	printf("\n\nString in ascending order: \n");
	for(i=0; i<10; i++)
	{
		printf("%s\n",name2[i]);
	}
	return 0;
}

