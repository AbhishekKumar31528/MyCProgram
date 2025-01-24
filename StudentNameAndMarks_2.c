/*1. WAP that will accept name,roll and marks of 5 papers of 5 student and 
print all entered record in following format:
Sr.No. |Name |Roll |p1|p2|p3|p4|p5|Total|Percentage|Division*/
#include<stdio.h>
#include<string.h>
#define SZ 2
int main()
{
	char sName[SZ][50];
	int marks[SZ][5],j,i;
	int rollNo[5];
	int totalMarks;
	float percentage;
	char division[100];
	
	char subNames[5][25]={"Hindi","English","Math","Science","S.Science"};
	for(i=0; i<SZ; i++)
	{
		printf("Enter name of student %d:",i+1);
		gets(sName[i]);
		printf("Enter Student Roll No.:");
		scanf("%d",&rollNo[i]);
		for(j=0; j<5; j++)
		{
			printf("Enter marks of %s:",subNames[j]);
			scanf("%d",&marks[i][j]);
		}
		fflush(stdin);
		printf("\n");
	}
		
	//Display result
	printf("\n%8s|%15s|%8s","Sr.No.","Name","Roll No.");
	for(i=0;i<5;i++)
	printf("|%8.8s",subNames[i]);
	
	printf("|%8s|%8s|%8s\n","Total","Percentage","Division");
	for(i=0;i<120;i++)
	printf("%c",205);
	
	for(i=0; i<SZ; i++)
	{
		//find total marks
		totalMarks=0;
		for(j=0;j<5;j++)totalMarks+=marks[i][j];
		//find percnetage
		percentage=totalMarks*100/500;
		//find division
		if(percentage>=60)
		strcpy(division,"Pass(1st Div)");	
		else if(percentage>=45)
		strcpy(division,"Pass(2nd Div)");
		else if(percentage>=33)
		strcpy(division,"Pass(3rd Div)");
		else
		strcpy(division,"Fail");
		//print on screen
		
		printf("\n%8d|%15s|%8d|",i+1,strupr(sName[i]),rollNo[i]);
		for(j=0; j<5; j++)
		{
			printf("%8d",marks[i][j]);
			if(marks[i][j]>=80)
			printf("D|");
			else if(marks[i][j]>=70)
			printf("G|");
			else if (marks[i][j]<30)
			printf("F|");
			else
			printf("|");
		}
		printf("%8d|%8.2g%%|%15s\n",totalMarks,percentage,division);
	
		for(j=0;j<120;j++)
		printf("%c",205);	
	}
	return 0;
}




