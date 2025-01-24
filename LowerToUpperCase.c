/*
WACP in which accept any string and print string in upper case
ex:
Input :Rupali Verma
Output: RUPALI VERMA
*/
#include<stdio.h>
int main()
{
	char str[50];
	int i;
	printf("Enter any string:");
	gets(str);
	
	for(i=0;str[i]!=NULL;i++)
	{
		if(str[i]>='a'&&str[i]<='z')
		{
			str[i]=str[i]-32;
		}
	}
	
	printf("Uppercase:%s",str);
	
	return 0;
}