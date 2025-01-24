#include<iostream>

using namespace std;
class Fraction
{
	private:
		int num;
		int dnum;
		int findLCM(int a,int b)
		{
			int x=a,y=b;
			while(x!=y)
			{
				if(x<y)
					x+=a;
				else 
					y+=b;	
			}
			return x;
		}
	public:
		Fraction(int num=0,int dnum=1) 
		{
			this->num=num;
			if(dnum!=0)
			this->dnum=dnum;
			else
			this->dnum=1;
			if(this->dnum<0)
			{
				this->num*=-1;
				this->dnum*=1;
			}
		}
		
		//getter function
		int getNum()
		{
			return this->num;
		}
		int getDnum()
		{
			return this->dnum;
		}
		//setter function
		void setNum(int num)
		{
			this->num=num;
		}
		void setDnum(int dnum)
		{
			if(dnum!=0)
			this->dnum=dnum;
			if(this->dnum<0)
			{
				this->num*=-1;
				this->dnum*=-1;
			}
		}
		void set(int num,int dnum)
		{
			this->num=num;
			if(dnum!=0)
			this->dnum=dnum;
			else
			this->dnum=1;
			if(this->dnum<0)
			{
				this->num*=-1;
				this->dnum*=-1;
			}
		}
	void setFromKb()
	{
		cout<<"Enter numerator:";
		cin>>num;
		cout<<"Enter denominator:";
		cin>>dnum;
		set(num,dnum);
	}
		
	void simplify()
	{
		/*1. Find the H.C.F of num and dnum 
		2. Divide num and dnum by H.C.F*/
		int x,y;
		x=abs(num);
		y=dnum;
		while(x!=y)
		{
			if(x>y)
			x-=y;
			else 
			y-=x;
		}
		num/=x;
		dnum/=x;
	}
	
	Fraction getSimplified()
	{
		Fraction sobj;
		//Copy invoking object in sobj
		sobj=*this;
		//Now simplify sobj
		sobj.simplify();
		return sobj;
	}
	

	//sum of two fraction number
	Fraction add(const Fraction &ob2)
	{
		Fraction result;
				
		result.dnum=findLCM(this->dnum,ob2.dnum);
		result.num=((result.dnum/this->dnum)*this->num)+((result.dnum/ob2.dnum)*ob2.num);
		return result;
	}
	
	Fraction operator+(const Fraction &ob2)
	{
		/*Fraction result;
				
		result.dnum=findLCM(this->dnum,ob2.dnum);
		result.num=((result.dnum/this->dnum)*this->num)+((result.dnum/ob2.dnum)*ob2.num);
		return result;*/
		return add(ob2);
	}
	//subtract of two fraction number
	
	Fraction subtraction(const Fraction &ob2)
	{
		Fraction result;
		result.dnum=findLCM(this->dnum,ob2.dnum);
		result.num=((result.dnum/this->dnum)*this->num)-((result.dnum/ob2.dnum)*ob2.num);
		return result;
	}
	
	//Product of two fraction number

	Fraction product(const Fraction &ob2)
	cout<<endl
	
	//division of two fraction number

	Fraction division(const Fraction &ob2)
	{
		Fraction result;
				
		result.num=this->num*ob2.dnum;
		result.dnum=this->dnum*ob2.num;
		if(this->dnum<0)
		{
			result.num*=-1;
			result.dnum*=-1;
		}
		return result;
	}
	
	void display(bool newLine=false)
	{
		if(newLine) cout<<endl;
		cout<<this->num<<"/"<<this->dnum;
	}

};
std::ostream& operator<<(const std::ostream &out,Fraction &obj)
{
	obj.show();
}