/*1.Write a C program in which accept two matrices of 5*5 order and find the sum of both matrices.*/
#include<stdio.h>
#define R 2
#define C 2
int main()
{
	int data[R][C],data1[R][C],i,j,sum[R][C];
	//Input 1st matrix data
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			printf("Enter value in 1st matrix data[%d][%d]:",i+1,j+1);
			scanf("%d",&data[i][j]);
		}
	}
	
	//input 2nd Matrix data
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			printf("Enter value in 2nd matrix data[%d][%d]:",i+1,j+1);
			scanf("%d",&data1[i][j]);
		}
	}
	
	//adding two matrix
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			sum[i][j]=data[i][j]+data1[i][j];
		}
	}
	
	printf("\nEntered 1st matrix\n");
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			printf("%5d",data[i][j]);
		}
		printf("\n");
	}
	printf("\nEntered 2nd Matrix\n");
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			printf("%5d",data1[i][j]);
		}
		printf("\n");
	}
	//Display output
	printf("\nSum of two matrix\n");
	for(i=0;i<R;i++)
	{
		for(j=0;j<R;j++)
		{
			printf("%5d",sum[i][j]);
		}
		printf("\n");
	}
	printf("\nThank you");
	return 0;
}