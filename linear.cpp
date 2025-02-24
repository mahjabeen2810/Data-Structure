#include<iostream>
using namespace std;
class linear
{
	int a[30],i,n,key;
	public:
		void read()
		{
			cout<<"Enter the number of elements : ";
			cin>>n;
			cout<<"Enter the elements : ";
			for(i=0;i<n;i++)
			{
				cin>>a[i];
			}
			cout<<"Enter the element to be searched : ";
			cin>>key;
		}
		void search()
		{
			for(i=0;i<n;i++)
			{
				if(a[i]==key)
				{
					cout<<"Element is found in the array "<<i+1;
					cout<<endl<<"Number of comparison : "<<i+1;
					break;
				}
			}
			if(i==n)
			{
				cout<<"SORRY!Element is not found in the array ";
				cout<<endl<<"Number of comparison : "<<i+1;	
			}
		}
};
int main()
{
	linear obj;
	obj.read();
	obj.search();
	return 0;
}
