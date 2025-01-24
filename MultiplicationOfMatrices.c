/*WACP that will accept two matrix of any order and find the product of both matrix*/
#include<stdio.h>
#include<math.h>
#define R 25
#define C 25
int main()
{
	int i,j,k,row1,col1,row2,col2,a1[R][C],a2[R][C],sum[R][C];
	
	printf("\nEnter order of matrix A(Row,Col)(row<=%d and col<=%d):",R,C);
	scanf("%d%*c%d",&row1,&col1);
	printf("\nEnter order of matrix B(Row,Col)(row<=%d and col<=%d):",R,C);
	scanf("%d%*c%d",&row2,&col2);
	
	row1=abs(row1);
	col1=abs(col1);
	row2=abs(row2);
	col2=abs(col2);
		
	/*For multipication of any matrix number of rows of 1st matrix
	 should be equal to number of column of 2nd matrix*/ 
	if( col1==row2 )
	{
		
		//Enter data in 1st Matrix
		for(i=0;i<row1;i++)
		{
			for(j=0;j<col1;j++)
			{
				printf("Enter value in a1[%d][%d]:",i,j);
				scanf("%d",&a1[i][j]);	
			}	
		}
		
		//Enter data in 2nd Matrix
		for(i=0;i<row2;i++)
		{
			for(j=0;j<col2;j++)
			{
				printf("Enter value in a2[%d][%d]:",i,j);
				scanf("%d",&a2[i][j]);	
			}	
		}	
		
		//Multiplication of two matrices
		for(i=0;i<row1;i++)
		{
			for(j=0;j<col2;j++)
			{
				sum[i][j]=0;
				for(k=0;k<col1;k++)
				{
					sum[i][j]+=a1[i][k]*a2[k][j];
				}
			}
		}
		
		//Display Output
		printf("\nMatrix A1:\n");
		for(i=0;i<row1;i++)
		{
			for(j=0;j<col1;j++)
			{
				printf("%5d",a1[i][j]);	
			}
			printf("\n");
		}
		
		printf("\nMatrix A2:\n");
		for(i=0;i<row2;i++)
		{
			for(j=0;j<col2;j++)
			{
				printf("%5d",a2[i][j]);	
			}
			printf("\n");
		}
	
	
		printf("\nThe product of the two matrices are:\n");
		for(i=0;i<row1;i++)
		{
			for(j=0;j<col2;j++)
			{
				printf("%5d",sum[i][j]);
			}
			printf("\n");
		}
		
	}
	else
	{
		printf("\nSorry! The order of your matrices does not fulfill the condition of multiplication of matrices.");
		
	}
	return 0;
}
