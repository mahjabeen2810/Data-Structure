#include<iostream>
using namespace std;
class binary
{
	int a[30],low,high,mid=0,key,i,n;
	public:
		void read()
		{
			cout<<"Enter the number of elements : ";
			cin>>n;
			cout<<"Enter the elements in ascending order : ";
			for(i=0;i<n;i++)
			{
				cin>>a[i];
			}
			cout<<"Enter the element to be searched : ";
			cin>>key;
		}
		void search()
		{
			low=0;
			high=n-1;
			for(i=0;low<=high;i++)
			{
				mid=((low+high)/2);
				if(a[mid]==key)
				{
					cout<<"Element is found in the array "<<mid+1;
					cout<<endl<<"Number of comparison : "<<i+1;
					break;
				}
				else if(a[mid]<key)
				{
					low=mid+1;
				}
				else
				{
					high=mid-1;
				}
			}
			if(low>high)
			{
				cout<<"SORRY! Element is not found in the array ";
				cout<<endl<<"Number of comparison : "<<i+1;
			}
		}
};
int main()
{
	binary obj;
	obj.read();
	obj.search();
	return 0;
}
