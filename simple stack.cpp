#include<iostream>
#include<cmath>
#include<cctype>
#include<cstdlib>
using namespace std;
class stack
{
	int *data,capacity,top;
	public:
		stack(int s)
		{
			data=new int[s];
			capacity=s;
			top=0;
		}
		bool isFull()
		{
			if(top==capacity)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		void puch(int d)
		{
			if(isFull())
			{
				cout<<"Stack is full"<<endl;
			}
			else
			{
				data[top++]=d;
			}
		}
		bool is_empty()
		{
			if(top==0)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		int pop()
		{
			if(is_empty())
			{
				cout<<"Stack is Empty"<<endl;
			}
			else
			{
				return data[--top];
			}
		}
};
int main()
{
	stack obj(5);
	for(int i=0;i<5;i++)
	{
		obj.puch(i+1);
	}
	for(int i=0;i<5;i++)
	{
		cout<<obj.pop();
	}
}

