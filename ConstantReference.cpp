/* Constant Reference - Read Only Reference*/
#include<iostream>
using namespace std;
int main()
{
	int i=0;
	
	int &j=i;//j is the reference of i
	
	const int &k=i;//k is the reference of i
	
	cout<<"\n Value of i="<<i;
	cout<<"\n Value of i="<<j;
	cout<<"\n Value of i="<<k;
	
	i=5;
	cout<<endl;
	cout<<"\n Value of i="<<i;
	cout<<"\n Value of i="<<j;
	cout<<"\n Value of i="<<k;
	
	j=10;
	cout<<endl;
	cout<<"\n Value of i="<<i;
	cout<<"\n Value of i="<<j;
	cout<<"\n Value of i="<<k;
	
	// k=15;//Error!Read Only Reference 
	
	const int a=20; //constant variable-Read only variable
	// a=29;// Error!
	
	//create reference of a
	// int &b=a; //Error!
	
	const int &b=a;
	cout<<endl<<"Value of a="<<b;
	
	return 0;
}
