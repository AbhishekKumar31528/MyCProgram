/*Q5).WACP that will accept 10 numbers from user and print all unique numbers in Ascending Order.*/
#include<stdio.h>
#define SZ 10
int main()
{
	//variable decleration
	int num[SZ],i,j,temp,found,totaluNo=0,uNo[SZ];
	
	//accept numbers
	for(i=0;i<SZ;i++)
	{
		printf("Enter the number %d/%d: ",i+1,SZ);
		scanf("%d",&num[i]);	
	}
	
	//find the unique number
	for(i=0;i<SZ;i++)
	{
		found=0;
		for(j=0;j<i;j++)
		{
			if(num[j]==num[i])
			{
				found=1;
				break;
			}
		}
		if(!found)
		uNo[totaluNo++]=num[i];
	}
	
	//arrange the unique numbers in accending order
	for(i=0;i<totaluNo;i++)
	{
		for(j=i+1;j<totaluNo;j++)
		{
			if(uNo[i]>uNo[j])
			{
				temp=uNo[i];
				uNo[i]=uNo[j];
				uNo[j]=temp;
			}
		}
	}
	
	//print the unique numbers
	printf("\nUnique Numbers = ");
	for(i=0;i<totaluNo;i++)
	{
		printf("%d",uNo[i]);
		if(i<totaluNo-1)
		printf(", ");
	}
	return 0;
}