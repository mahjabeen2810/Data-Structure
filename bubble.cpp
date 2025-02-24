#include<iostream>
using namespace std;
class bubble
{
	int a[30],i,j,n,comparison=0,temp;
	public:
		void read()
		{
			cout<<"Enter the number of elements : ";
			cin>>n;
			cout<<"Enter the elements  : ";
			for(i=0;i<n;i++)
			{
				cin>>a[i];
			}
		}
		void sort()
		{
			for(i=0;i<n;i++)
			{
				for(j=0;j<n-i-1;j++)
				{
					comparison=comparison+1;
					if(a[j]>a[j+1])
					{
						temp=a[j];
						a[j]=a[j+1];
						a[j+1]=temp;
					}
				}
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
	bubble obj;
	obj.read();
	obj.sort();
	obj.display();
	return 0;
}
