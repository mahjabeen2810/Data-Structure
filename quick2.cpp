#include<iostream>
using namespace std;
class quick
{
	int a[30],i,j,n,comparison=0,flag,temp;
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
			sort(a,0,n-1);
		}
		void sort(int num[30],int first,int last)
		{
			if(first<last)
			{
				flag=first;
				i=first;
				j=last;
				while(i<j)
				{
					comparison=comparison+1;
					while(num[i]<=num[flag] && i<=last)
					{
						i++;	
					}	
					while(num[j]>num[flag] && j>=first)
					{
						j--;
					}
					if(i<j)
			        {
						temp=num[i];
						num[i]=num[j];
						num[j]=temp;
					}
				}
				temp=num[j];
				num[j]=num[flag];
				num[flag]=temp;
				sort(num,first,j-1);
				sort(num,j+1,last);
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
	quick obj;
	obj.read();
	obj.display();
	return 0;
}
