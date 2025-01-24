/*Dynamic Memory Allocation In C++*/
/* In C
<malloc.h>
malloc(),calloc(),realloc()
free()
*/
/*
'new' and 'delete' keyword is used to perform dynamic memory allocation in C++
'new' is used to allocate memory
and 'delete' is used to release allocated memory
Note: -----No need to include any header file

Syntax:
-----------
allocate memory:
--------------------
ptrName=new dataType;

Ex:
Allocate memory for int value
-----------------------------------
in C
-----
#include<malloc.h>
int *p;
p=(int*)malloc(sizeof(int));

in C++
--------
int *p;
p=new int;

Releasing memory
----------------------
delete ptrName;

Q Release previous allocated memory
---------------------------------------
in C
-------
free(p);

in C++
-------
delete p;

Initialization of dynamically allocated memory
---------------------------------------------------
Memory allocated using malloc() and calloc() can't be initialized

memory allocated using new can be initialized as:

ptrName=new dataType(initialValue);

ex:
int *p;
p=new int(5);
*/
#include<iostream>
using namespace std;
int main()
{
	int *p1;
	int *p2;
	
	p1=new int;
	p2=new int(5);
	
	cout<<endl<<"Value of 1st variable:"<<*p1;
	cout<<endl<<"Value of 2nd variable:"<<*p2;
	delete p1;
	delete p2;	
}

