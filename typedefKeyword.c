/*typedef - Defines new type name
Syntax-->
typedef type newTypeName;
for Example:
typedef int sunny; //Now sunny will represent the int type

*/
#include<stdio.h>
typedef int sunny;
int main()
{
	//create a variable to store integer value
	int a;
	int *ptr;
	int* p1;
	int *p2,p3;
	int* p4,p5;
	//Again create a variable to store integer value
	sunny b;
	a=10;
	b=5;
	printf("\na: %d, b=%d",a,b);
	printf("\nSize of ptr=%d",sizeof(ptr));
	printf("\nSize of p1=%d",sizeof(p1));
	printf("\nSize of p2=%d",sizeof(p2));
	printf("\nSize of p3=%d",sizeof(p3));
	printf("\nSize of p4=%d",sizeof(p4));
	printf("\nSize of p5=%d",sizeof(p5));
	
	return 0;
}
