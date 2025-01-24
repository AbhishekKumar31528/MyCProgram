/*
Integer to String Conversion
------------------------------
integer String
45    -> "45"
6786  -> "6786"
65536 ->  "65536"

String to Int Conversion
"45"  -> 45
"Ram"  -> Can't be converted
"45A"   -> Can't be converted

sprintf()-> prints given data in a string
Used to convert integer data into string data

Syntax:
sprintf(string,"ControlString",VarName);
*/
/* C program that will accept a number and convert that number in string
and print both number and converted string*/
#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	char sn[50]="NoData";
	printf ("Enter any number:");
	scanf("%d",&n);
	printf("\nBefore conversion n=%d and sn=%s",n,sn);
	//convert n in string
	sprintf(sn,"%d",n);
	printf("\nAfter conversion n=%d and sn=%s",n,sn);
	
	return 0;
	
	
	
}



