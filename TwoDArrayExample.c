/*C program to accept data in a 2d array and print the content of array*/
#include<stdio.h>
#define ROW 5
#define COL 5
int main()
{
	int data[ROW][COL],i,j;
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			printf("Enter value in data[%d][%d]:",i,j);
			scanf("%d",&data[i][j]);
		}
	}
	
	printf("Entered matrix is:\n");
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			printf("%d,",data[i][j]);	
		}
		printf("\n");
	}
	return 0;
}
/*
1.Write a C program in which accept two matrices of 5*5 order and find the sum of both matrices.
2. Write a c program in which accept a matrix of order 6*4 and:
a) find the sum of all rows
b) find the sum of all columns
c) find the sum of all rows and columns
ex:
1 2 3 4 = 10
2 3 1 6 = 12
4 1 2 4 = 11

ex: 2
1 2 3 4
2 3 1 6
4 1 2 4
=========
7 6 6 14

ex: 3
1 2 3 4 = 10
2 3 1 6 = 12
4 1 2 4 = 11
=================
7 6 6 14
*/
