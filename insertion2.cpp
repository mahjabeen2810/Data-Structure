#include<iostream>
using namespace std;
class insertion
{
	int a[30],pos,comparison=0,i,n,key;
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
		}
		void sort()
		{
			for(i=1;i<n;i++)
			{
				key=a[i];
				pos=i-1;
				while(pos>=0 && a[pos]>key)
				{
					a[pos+1]=a[pos];
					pos=pos-1;
				}
				a[pos+1]=key;
				comparison=comparison+1;
			}
		}
		void display()
		{
			cout<<"DISPLAYING SORTED LIST : ";
			for(i=0;i<n;i++)
			{
				cout<<a[i]<<" ";
			}
			cout<<endl<<"Number of comparison : "<<comparison;
		}
};
int main()
{
	insertion obj;
	obj.read();
	obj.sort();
	obj.display();
	return 0;
}
