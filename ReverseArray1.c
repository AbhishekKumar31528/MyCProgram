/* WACP that will accept 10 numbers in an array.
1. Print the content of array
2. Reverse the array
3. Print the reversed array
*/
#include<stdio.h>
#define SZ 10
int main()
{
	int arr[SZ],carr[SZ],i;
	//code for input data
	for(i=0;i<SZ;i++)
	{
		printf("Enter number %d/%d:",i+1,SZ);
		scanf("%d",&arr[i]);
	}
	
	//print the content of array
	printf("\nContent of array arr=");
	for(i=0;i<SZ;i++)
	{
		printf("%d->%d",i,arr[i]);
		if(i<SZ-1)
		printf(", ");
	}
	
	//code for reverse array
	//step 1: copy main array in carr in reverse order
	for(i=0;i<SZ;i++)
	{
		carr[i]=arr[SZ-1-i];
	}
	//step 2: copy carr in arr
	for(i=0;i<SZ;i++)arr[i]=carr[i];
	
	//print content of original array
	printf("\nContent of array arr(after reversing)=");
	for(i=0;i<SZ;i++)
	{
		printf("%d->%d",i,arr[i]);
		if(i<SZ-1)
		printf(", ");
	}
	return 0;
	
	
}
