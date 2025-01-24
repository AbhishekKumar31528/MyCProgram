//1. WACP that will accept 10 numbers from user and print all numbers in descending order.
#include<stdio.h>
#define SZ 10
int main()
{
	int data[SZ],i,j,temp;
	//code for input data
	for(i=0;i<SZ;i++)
	{
		printf("Enter number %d/%d:",i+1,SZ);
		scanf("%d",&data[i]);
	}
	
	printf("\nContent of array before sort:");
	for(i=0;i<SZ;i++)
	{
		printf("%d",data[i]);
		if(i<SZ-1)
		printf(", ");
	}
	
	//code for sort
	for(i=0;i<SZ-1;i++)
	{
		for(j=i+1;j<SZ;j++)
		{
			if(data[i]<data[j])
			{
				temp=data[i];
				data[i]=data[j];
				data[j]=temp;
			}
		}
	}
	
	printf("\nContent of array after sort:");
	for(i=0;i<SZ;i++)
	{
		printf("%d",data[i]);
		if(i<SZ-1)
		printf(", ");
	}
	return 0;
	
}
