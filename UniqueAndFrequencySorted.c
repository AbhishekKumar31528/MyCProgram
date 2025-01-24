/*WACP that will accept 10 numbers from user
and print all unique numbers and its frequency.
first numbers should be printed according to unique number in ascending order
and second numbers should be printed according to frequency in ascending order*/
#include<stdio.h>
#define SZ 10
int main()
{
	int data[SZ],unique[SZ],fre[SZ],i,j,found,totalUniqueNos,t;
	//accept data from user
	for(i=0;i<SZ;i++)
	{
		printf("Enter number %d/%d:",i+1,SZ);
		scanf("%d",&data[i]);
	 } 
	 
	 //find unique numbers
	 totalUniqueNos=0;
	 for(i=0;i<SZ;i++)
	 {
	 	//find data[i] is available in unique list or not
	 	found=0;
	 	for(j=0;j<totalUniqueNos;j++)
	 	if(data[i]==unique[j])
	 	{
	 		found=1;
	 		break;
		 }
		 
		 if(!found)unique[totalUniqueNos++]=data[i];
	 }
	 
	 //find frequency of all unique numbers
	 for(i=0;i<totalUniqueNos;i++)
	 {
	 	//find the frequency of unique[i] in data array and store in fre array
	 	fre[i]=0;
	 	for(j=0;j<SZ;j++)
	 	if(unique[i]==data[j])fre[i]++;
	 }
	 
	 //sort data using unique number
	 for(i=0;i<totalUniqueNos-1;i++)
	 {
	 	for(j=i+1;j<totalUniqueNos;j++)
	 	{
	 		if(unique[i]>unique[j])
	 		{
	 			t=unique[i];
	 			unique[i]=unique[j];
	 			unique[j]=t;
	 			t=fre[i];
	 			fre[i]=fre[j];
	 			fre[j]=t;
			 }
		 }
	 }
	 
	 printf("\nEntered data:");
	 for(i=0;i<SZ;i++)
	 {
	 	printf("%d",data[i]);
	 	if(i<SZ-1)printf(", ");
	 }
	 
	 printf("\n\nUniqueNo\tFrequency\n====================");
	 for(i=0;i<totalUniqueNos;i++)
	 {
	 	printf("\n%d\t\t%d",unique[i],fre[i]);
	 }
	 printf("\n====================");
	 
	 //sort data according to frequency
	 for(i=0;i<totalUniqueNos-1;i++)
	 {
	 	for(j=i+1;j<totalUniqueNos;j++)
	 	{
	 		if(fre[i]>fre[j])
	 		{
	 			t=fre[i];
	 			fre[i]=fre[j];
	 			fre[j]=t;
	 			t=unique[i];
	 			unique[i]=unique[j];
	 			unique[j]=t;
	 			
			 }
		 }
	 }
	 printf("\n====================\nUniqueNo\tFrequency");
	 for(i=0;i<totalUniqueNos;i++)
	 {
	 	printf("\n%d\t\t%d",unique[i],fre[i]);
	 }
	 printf("\n====================");
	 
	 return 0;
	 
}
