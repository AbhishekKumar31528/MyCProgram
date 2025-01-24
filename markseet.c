/*1. WAP that will accept name,roll and marks of 5 papers of 5 student and 
print all entered record in following format:
Sr.No. |Name |Roll |p1|p2|p3|p4|p5|Total|Percentage|Division*/
#include<stdio.h>
int main()
{
	char string[5][100];
	int marks[5][5],j,i,sum=0;
	int roll[5];
	int totalmarks[5]={0};
	float percentage[5];
	for(i=0; i<5; i++)
	{
		printf("Enter %d name:",i+1);
		gets(string[i]);
		printf("\nEnter Student Roll No.:");
		scanf("%d",&roll[i]);
		for(j=0; j<5; j++)
		{
			printf("Enter %d Paper marks:",j+1);
			scanf("%d",&marks[i][j]);
		}
	}
	
	//Code for sum total marks of student
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			totalmarks[i]+=marks[i][j];
		}
	}
	
	//Code for find percentage
	for(i=0; i<5; i++)
	{
		percentage[i]=totalmarks[i]/5;
	}
	//Display result
	printf("Sr.No.   |Name\t\t|Roll\t|p1\t|p2\t|p3\t|p4\t|p5\t|Total\t|Percentage|Division\n");
	for(i=0; i<5; i++)
	{
		printf("%d.\t%s\t",i+1,string[i]);
		printf("%3d\t",roll[i]);
		for(j=0; j<5; j++)
		{
			printf("  %d\t",marks[i][j]);
		}
		printf("%3d\t",totalmarks[i]);
		printf("   %g\t",percentage[i]);
		if(percentage[i]>=30)
		printf("    Pass");	
		else
		printf("    fail");
		printf("\n");	
	}
	return 0;
}