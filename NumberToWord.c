/*
WACP that will accept an integr number and print that number in word.
ex: 67856
Output: Six Seven Eight Five Six
6|5|8|7|6|
*/
#include<stdio.h>
int main()
{
	int n,x,digits[15]={0},totalDigits=0,i;
	printf("enter any number:");
	scanf("%d",&n);
	n=abs(n);
	
	//extract all digit from given number and store in array
	x=n;
	do
	{
		digits[totalDigits++]=x%10;
		x/=10;
	}while(x);
	
	//print array in reverse order
	for(i=totalDigits-1;i>=0;i--)
	{
		if(digits[i]==0)
		printf("Zero");
		else if(digits[i]==1)
		printf("One");
		else if(digits[i]==2)
		printf("Two");
		else if(digits[i]==3)
		printf("Three");
		else if(digits[i]==4)
		printf("Four");
		else if(digits[i]==5)
		printf("Five");
		else if(digits[i]==6)
		printf("Six");
		else if(digits[i]==7)
		printf("Seven");
		else if(digits[i]==8)
		printf("Eight");
		else
		printf("Nine");
		
		printf(" ");
	}
	return 0;
}1
