#include<cmath>
#include<iostream>
using namespace std;
/* Array*/
class RajArray
{
	int *arr;
	int capacity;
	int size;
	public:
		//constructor
		RajArray(int capacity=5)
		{
			capacity=abs(capacity);
			if(capacity==0)capacity=5;
			this->capacity=capacity;
			//allocate memory for array
			arr=new int[this->capacity];
			
			size=0;
		}
		//destructor- Called when object is destroyed
		~RajArray()
		{
			delete []arr;
		}
		
		public:
			int getCapacity()
			{
				return capacity;
			}
			int getSize()
			{
				return size;
			}
			bool insert(int data,int pos=0)
			{
				pos=abs(pos);
				//pos=0 means insert at last
				int i;
				if(size==capacity)return false;
				
				if(pos==0||pos>size+1)pos=size+1;
				
				for(i=size;i>=pos;i--)arr[i]=arr[i-1];
				
				//put new data at pos element
				arr[pos-1]=data;
				
				size++;
				
				return true;
				
			}
			/*
			 bool operator<<(int data)
			 {
				return insert(data,0);		 	
			 }*/
			 
			 RajArray& operator<<(int data)
			 {
			 	insert(data);
			 	return *this;
			 }			
			void display()
			{
				if(size==0)
				{
					cout<<"Empty!";
				}
				for(int i=0;i<size;i++)
				{
					cout<<arr[i];
					if(i<size-2)
					cout<<", ";
					else if(i==size-2)
					cout<<" and ";
					else
					cout<<"|";
				}
			}
			
			bool del(int index=0)
			{
				index=abs(index);
				//delete last element if index=0
				if(index=0)index=size;
				
				if(size==0)return false;
				
				for(int i=index-1;i<size-1;i++)arr[i]=arr[i+1];
				
				size--;
				
				return true;
			}

};
