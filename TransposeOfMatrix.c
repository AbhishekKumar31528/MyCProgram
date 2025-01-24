/*WACP that will accept a matrix of order m*n and find the 
transpose matrix of entered matrix and print both matrix*/
#include<stdio.h>
#include<math.h>
#include<process.h>
#define ROW 25
#define COL 25
int main()
{
	//variable decleration
	int matrix[ROW][COL],i,j,row,col,temp;
	
	printf("Enter the order of matrix(row,col) (row<= %d and col<= %d):",ROW,COL);
	scanf("%2d%*c%2d",&row,&col);
	row=abs(row);
	col=abs(col);
	
	if(row==0 || col==0)
	{
		printf("\nOrder of matrix can't be 0.");
		return 0;
	
	}
	if(row>ROW || col>COL)
	{
		printf("\nrow value should be <= %d and column value should be <= %d",ROW,COL);
		return 0;
	}
	
	//accept matrix 
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\nEnter the element for matrix[%d][%d]: ",i,j);
			scanf("%d",&matrix[i][j]);
		}
	}
	system("cls");
	
	//print the matrix
	printf("\nEntered matrix is:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		printf("%6d",matrix[i][j]);
		printf("\n");
	}
	
	//swap the value of row and column
	temp=row;
	row=col;
	col=temp;
	
	//find the transpose of matrix
	printf("\nTranspose of matrix:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		printf("%6d",matrix[j][i]);
		printf("\n");
	}
	return 0;
}
