#include<iostream>
#include<cmath>
#include<cctype>
#include<cstdlib>
using namespace std;
class Queue
{
	int *data,cap,rear,front,NOE;
	public:
		Queue(int d)
		{
			data=new int[d];
			cap=d;
			rear=0;
			front=0;
			NOE=0;
		}
		bool is_Empty()
		{
			if(NOE==0)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		bool is_Full()
		{
			if(NOE==cap)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		void en_Queue(int i)
		{
			if(is_Full())
			{
				cout<<"Queue is Full"<<endl;
			}
			else
			{
				data[rear++]=i;
				NOE++;
			}
		}
		int de_Queue()
		{
			if(is_Empty())
			{
				cout<<"Queue is empty"<<endl;
			}
			else
			{
				return data[front++];
				NOE--;
			}
		}
};
int main()
{
	Queue q1(5);
	int a[5]={0,1,2,3,4};
	for( int i=0;i<5;i++)
	{
		q1.en_Queue(a[i]);
	}
	for( int i=0;i<5;i++)
	{
		cout<<q1.de_Queue();
	}
}

