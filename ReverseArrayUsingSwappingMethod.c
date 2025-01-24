/* WACP that will accept 10 numbers in an array.
1. Print the content of array
2. Reverse the array
3. Print the reversed array
*/
#include<stdio.h>
#define SZ 10
int main()
{
	int arr[SZ],t,i;
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
	for(i=0;i<SZ/2;i++)
	{
		//swap ith element with ((SZ-1)-i)th element
		t=arr[i];
		arr[i]=arr[SZ-1-i];
		arr[SZ-1-i]=t;
	}
	
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
/*
Comparing Array
--------------------

*/

