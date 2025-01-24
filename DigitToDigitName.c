/* C program that will accept a number and print that number in word*/
#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	char digitname[10][50]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
	char numbername[200]=""; //Initialised with empty string
	int totaldigit=0,n,nx,fd;
	printf("Enter any number:");
	scanf("%d",&n);
	nx=abs(n);
	
	//count total number of digit in given number
	nx=abs(n);
	do
	{
		nx/=10;
		totaldigit+=1;
	}while(nx!=0);
	totaldigit-=1;
	
	while(totaldigit>=0)
	{
		fd=(n/(int)pow(10,totaldigit))%10;
		strcat(numbername,digitname[fd]);
		strcat(numbername," ");
		totaldigit-=1;
	}
	printf("%s",numbername);
	return 0;
}
