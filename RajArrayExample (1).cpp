#include"rajarray.cpp"
int main()
{
	RajArray a1(10),a2;
	a1.display();
	a2.display();
	a1.insert(5);
	a1.insert(7);
	a1.insert(9);
	a1.insert(11);
	a2.insert(10);
	cout<<endl<<"a1=";
	a1.display();
	cout<<endl<<"a2=";
	a2.display();
	a1.del(1);
	cout<<endl<<"a1=";
	a1.display();
	a1.insert(75,1);
	cout<<endl<<"a1=";
	a1.display();
	a1<<15;//a1.operator<<(15)
	a1<<45;
	a1<<17;
	a1<<6;
	cout<<endl<<"a1=";
	a1.display();
	cout<<endl<<endl;
	RajArray ob1=10;
	ob1<<5;
	ob1.display();
	cout<<endl;
	ob1<<9<<13<<2<<30<<15;
	ob1.display();
	return 0;
}
