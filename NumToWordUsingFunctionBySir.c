/*WACP that will accept an integer number and print the number in 
word*/
#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	//variable declaration
	int n,i;
	char digitName[10][50]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
	char numberName[200]="";//intilialised with empty string
	char sd[50];
	//input accept
	printf("Enter any number:");
	scanf("%d",&n);
	//conver entered number in string
	sprintf(sd,"%d",n);
	for(i=0;sd[i];i++)
	{		
		strcat(numberName,digitName[sd[i]-48]);
		strcat(numberName," ");
	}
	printf("%s",strupr(numberName));
	
	printf("\nThank you");
}
