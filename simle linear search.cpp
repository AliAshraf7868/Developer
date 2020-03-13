#include<iostream>
using namespace std;
int main()
{
	int a[5]={1,2,3,4,5};
	int temp=4;
	for(int i=0;i<5;i++)
	{
		if(a[i]==temp)
		{
			cout<<"value found at index: "<<i<<" after: "<<i+1<<" iterations"<<endl;
			break;
		}
	}
}

