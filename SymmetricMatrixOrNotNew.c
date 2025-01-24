/* C program that will accept a matrix, print entered matrix, transpose matrix and check matrix is symmatric or not*/
#include<stdio.h>
#define R 25
#define C 25
int main()
{
	int a[R][C],ta[R][C],i,j,sym,row,col,wrongInput=0;
	do
	{
		wrongInput=0;
		printf("\nEnter order of matrix(Row,Col)(row<=%d and col<=%d):",R,C);
		scanf("%d%*c%d",&row,&col);
		row=abs(row);
		col=abs(col);
		if(row==0 && col==0)
		{
			printf("\nSorry! row and column value can't be 0.");
			wrongInput=1;
		}else if(row==0)
		{
			printf("\nSorry! row value can't be 0");
			wrongInput=1;
		}
		else if(col==0)
		{
			printf("\nSorry! col value can't be 0");
			wrongInput=1;
		}
		
		if(row>R&&col>C)
		{
			printf("\nSorry! row and column value is out of capacity");
			wrongInput=1;
		}
		else if(row>R)
		{
			printf("\nSorry! row value is out of capacity.");
			wrongInput=1;
		}
		else if(col>C)
		{
			printf("\nSorry! col value is out of capacity.");
			wrongInput=1;
		}
	}while(wrongInput);
	
	//Enter data in matrix
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter value in a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);	
		}	
	}	
	//find transpose of a
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			ta[j][i]=a[i][j];
		}
	}
	//find matrix is symmatric or not
	sym=0;
	if(row==col)
	{
		//compare both matrix
		sym=1;
		for(i=0;i<row&&sym;i++)
		{
			for(j=0;j<col&&sym;j++)
			{
				if(a[i][j]!=ta[i][j])
				sym=0;
			}
		}
	}
	
	//print matrix
	printf("\nEntered matrix:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%5d",a[i][j]);	
		}
		printf("\n");
	}
	printf("\nTranspose matrix:\n");
	for(i=0;i<col;i++)
	{
		for(j=0;j<row;j++)
		{
			printf("%5d",ta[i][j]);	
		}
		printf("\n");
	}
	
	if(sym)
	{
		printf("\nMatrix is symmetric.");
	}
	else
	{
		printf("\nMatrix is not symmetric.");
	}
	return 0;
}

/*
WACP that will accept two matrix of any 
order and find the product of both matrix*/

