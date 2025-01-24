/*WAC++ program that will accept any two number and write its fraction form*/
#include<iostream>
#include"Fraction.cpp"
using namespace std;

int main()
{
	Fraction f1,f2(5,7),f3(1,0),f4(12,-2),f5,f6,f7;
	f1.display(true);
	f2.display(true);
	f3.display(true);
	f4.display(true);
	f5.setNum(12);
	f5.setDnum(95);
	f5.display(true);
	f6.setDnum(f2.getNum());
	f6.setNum(f5.getDnum());
	f2.setNum(45);
	f2.display(true);
	f6.display(true);
	Fraction obj1(33,22),obj2(21,9),obj3(42,49),obj4(22,12),obj5(44,12);
	obj1.display(true);
	//obj1.simplify(); 
	obj2.simplify();
	obj3.simplify();
	obj4.simplify();
	//obj5.simplify();
	obj1.display(true);
	obj2.display(true);
	obj3.display(true);
	obj4.display(true);
	obj5.display(true);
	/*Value of obj1 is 33/22 and its simplify form is 3/2 */
	Fraction sobj1;
	//sobj1.setNum(obj1.getNum());
	//sobj1.setDnum(obj1.getDnum());
	sobj1=obj1;
	sobj1.simplify();
	cout<<endl<<"Value of obj1 is ";
	obj1.display();
	cout<<"and its simplified form is ";
	sobj1.display();
	Fraction sobj2,sobj5;
	//Put the simplify form of obj1 in sobj2
	sobj2=obj1.getSimplified();
	cout<<endl<<"Value of obj1 is ";
	obj1.display();
	cout<<"and its simplified form is ";
	sobj2.display();
	cout<<endl<<"Value of obj5 is ";
	obj5.display();
	cout<<"and its simplified form is ";
	obj5.getSimplified().display();
	
	return 0;
}