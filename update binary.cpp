#include<iostream>
using namespace std;
int main()
{
	int arr[5]={1,2,3,4,5},mid=5/2,key=5;
	for(int i=0;i<mid;i++)
	{
		if(arr[mid]==key)
		{
			cout<<"we find result on "<<mid<<" index after "<<i+1 <<" iterations"<<endl;
			break;
		}
		else if(arr[mid]>key)
		{
			mid=mid/2;
		}
		else if(arr[mid]<key)
		{
			mid=mid+mid/2;
		}
		else 
		cout<<"Given key is not found"<<endl;
	}
}

