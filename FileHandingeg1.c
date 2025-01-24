/*Reading a character from file
fgetc()-This function reads a character from file/Stream.
steps to read charater from file

*/

#include<stdio.h>
int main()
{
	char c;
	FILE *file;
	//Create an input stream
	file=fopen("C:\\FileHanding\\data.txt","r");
	if(file==NULL)
	{
		printf("Error:file not found. ");
		return 0;
	}
	while(feof(file)==0)
		{
		c=fgetc(file);
		printf("%c",c);
	}
	fclose(file);
	return 0;
}
