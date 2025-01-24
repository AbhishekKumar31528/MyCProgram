/*WACP that will accept two matrix of any 
order and find the product of both matrix*/
#include<stdio.h>
#include<math.h>
#define R 30
#define C 30
int main()
{
	//variable decalration
	int a[R][C],b[R][C],mul[R][C],i,j,k,row,col,row1,col1,wrongInput=0;
	//input order of 1st matrix
	do
	{
		wrongInput=0;
		printf("\nEnter order of 1stmatrix(Row,Col)(row<=%d and col<=%d):",R,C);
		scanf("%d%*c%d",&row,&col);
		row=abs(row);
		col=abs(col);
		if(row==0&&col==0)
		{
			printf("\nSorry! row1 and column1 value can't be 0.");
			wrongInput=1;
		}else if(row==0)
		{
			printf("\nSorry! row1 value can't be 0");
			wrongInput=1;
		}
		else if(col==0)
		{
			printf("\nSorry! col1 value can't be 0");
			wrongInput=1;
		}
		
		if(row>R&&col>C)
		{
			printf("\nSorry! row1 and column1 value is out of capacity");
			wrongInput=1;
		}
		else if(row>R)
		{
			printf("\nSorry! row1 value is out of capacity.");
			wrongInput=1;
		}
		else if(col>C)
		{
			printf("\nSorry! col1 value is out of capacity.");
			wrongInput=1;
		}
	}while(wrongInput);
	
	//input order of 2nd matrix
	do
	{
		wrongInput=0;
		printf("\nEnter order of 2ndmatrix(Row,Col)(row<=%d and col<=%d):",R,C);
		scanf("%d%*c%d",&row1,&col1);
		row1=abs(row1);
		col1=abs(col1);
		if(row1==0&&col1==0)
		{
			printf("\nSorry! row2 and column2 value can't be 0.");
			wrongInput=1;
		}else if(row1==0)
		{
			printf("\nSorry! row2 value can't be 0");
			wrongInput=1;
		}
		else if(col1==0)
		{
			printf("\nSorry! col2 value can't be 0");
			wrongInput=1;
		}
		
		if(row1>R&&col1>C)
		{
			printf("\nSorry! row2 and column2 value is out of capacity");
			wrongInput=1;
		}
		else if(row1>R)
		{
			printf("\nSorry! row2 value is out of capacity.");
			wrongInput=1;
		}
		else if(col1>C)
		{
			printf("\nSorry! col2 value is out of capacity.");
			wrongInput=1;
		}
	}while(wrongInput);
	
	//input 1st matrix
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\nEnter value in a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	//input 2nd matrix
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col1;j++)
		{
			printf("\nEnter value in b[%d][%d]:",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	
	
	//Print 1st matrix 
	printf("\nEntere 1st Matrix:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%5d",a[i][j]);
		}
		printf("\n");
	}
	
	//Print 2nd matrix 
	printf("\nEntere 2nd Matrix:\n");
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col1;j++)
		{
			printf("%5d",b[i][j]);
		}
		printf("\n");
	}
	
	//find product of two matrix
	printf("\nProduct of Both matrices:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col1;j++)
		{
			mul[i][j]=0;
			for(k=0;k<row1;k++)
			mul[i][j]+=a[i][k]*b[k][j];
			printf("%5d",mul[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
	