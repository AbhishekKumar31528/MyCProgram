#include<iostream>
#include<cmath>
using namespace std;
class IntStack
{
	int *stack;
	int capacity;
	int tos;
	public:
		IntStack(int capacity=5)
		{
			capacity=abs(capacity);
			if (capacity==0)capacity=5;
			this->capacity=capacity;
			//Create array of capacity size
			stack=new int[this->capacity];
			tos=-1;
		}	
		~IntStack()
		{
			delete []stack;
		}
		int getCapacity()
		{
			return capacity;
		}
		int getTotalElement()
		{
			return tos+1;
		}
		bool push(int data)
		{
			if(tos+1==capacity)return false;
			stack[++tos]=data;
			return true;
		}
		bool pop(int &data)
		{
			if(tos==-1)return false;
			data=stack[tos--];
			return true;
		}
		void display()
		{
			if(tos==-1)
			{
				cout<<"Stack is empty";
				return;
			}
			for (int i=0;i<=tos;i++)
			{
				cout<<stack[i];
				if(i<tos)
				cout<<">";
			}
		}
};
ostream& operator<<(ostream& out,IntStack& stack)
{
	stack.display();
	return out;
} 
