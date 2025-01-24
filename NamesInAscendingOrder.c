/*WACP that will accept 10 names and print all names in ascending order*/
#include<stdio.h>
#include<string.h>
#define SZ 10
int main()
{
	int i,j,c;
	char str[100][100],s[30];
	
	for(i=0;i<SZ;i++)
	{
		printf("Enter name %d/%d:",i+1,SZ);
		gets(str[i]);
	}
	for(i=0;i<SZ-1;i++)
	{
		for(j=i+1;j<SZ;j++)
		{	
			c=stricmp(str[i],str[j]);
			if(c>0)
			{
				strcpy(s,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],s);
			}
		}	
	}	
	printf("Names in Ascending Order:\n");
	for(i=0;i<SZ;i++)
	{
		printf("%s\n",str[i]);
	}
	return 0;
}