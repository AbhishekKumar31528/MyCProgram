/*C++ Program*/ 
#include<iostream>
#include<cstring>
using namespace std;
class Student
{
	 char name[50];
	 char gender[10];
	 int clas;
	 int roll;
	public:
		//Creating a constructor
		Student (char *n="No Name", char *g="N/A", int cl=0, int rl=0)
		{
			strcpy(name, n);
			strcpy(gender,g);
			clas=cl;
			roll=rl;
		}
		Student(int cl, int rl=0)
		{
			strcpy(name, "No Name");
			strcpy(gender, "N/A");
			clas=cl;
			roll=rl;
		}
		
		void set(char *n="No name", char *g="N/A", int cl=0, int rl=0)
		{
			strcpy(name, n);
			strcpy(gender, g);
			clas=cl;
			roll=rl;
		}
		void setName(char *n)
		{
			strcpy(name,n);
		}
		void setGender(char *g)
		{
			strcpy(gender,g);
		}
		void setClass(int cl)
		{
			clas=cl;
		}
		void setRoll(int rl)
		{
			roll=rl;
		}
		void show()
		{
			cout<<endl<<"Name: "<<name<<" Gender: "<<gender
			<<" Class: "<<clas<<" Roll: "<<roll;
		}	
		char *getName()
		{
			return name;
		}
		
};
int main()
{
	Student ob1;
	ob1.show();
	Student ob2("Sunny","Male",12,10);
	ob2.show();
	ob2.setName("Angad");
	ob2.show();
	ob2.set("Sandeep");
	ob2.show();
	Student ob3;
	//Set the name value of ob2 in ob3
	ob3.setName(ob2.getName());
	ob3.show();
	return 0;
}