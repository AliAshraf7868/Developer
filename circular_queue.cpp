#include<iostream>
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
				data[rear]=i;
				rear=(rear+1)%cap;
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
				NOE--;
				int x=data[front];
				front=(front+1)%cap;
				return x;
			}
		}
};
int main()
{
	Queue q1(8);
	for(int i=0;i<8;i++)
	{
		q1.en_Queue(i+1);
	}
	for(int i=0;i<2;i++)
	{
		cout<<q1.de_Queue()<<endl;
	}
	for(int i=0;i<2;i++)
	{
		q1.en_Queue(i+1);
	}
}

