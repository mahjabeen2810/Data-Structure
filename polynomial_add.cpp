#include<iostream>
using namespace std;
struct poly
{
	int co,exp;
};
struct poly a[10],b[10],c[10],d[10];
class polynomial
{
	int i,m=0,n=0,k=0,de1,de2;
	public:
		void read()
		{
			cout<<"Enter the degree of the first polynomial : ";
			cin>>de1;
			for(i=0;i<=de1;i++)
			{
				cout<<"Enter the "<<i<<" degree coefficient of the first polynomial : ";
				cin>>a[i].co;
				a[k++].exp=i;
			}
			cout<<"Enter the degree of the second polynomial : ";
			cin>>de2;
			for(i=0;i<=de2;i++)
			{
				cout<<"Enter the "<<i<<" degree coefficient of the first polynomial : ";
				cin>>b[i].co;
				b[m++].exp=i;
			}
		}
		void display()
		{
			cout<<"First expression : "<<a[0].co;
			for(i=1;i<=de1;i++)
			{
				cout<<"+"<<a[i].co<<"x^"<<a[i].exp;
			}
			cout<<endl<<"Second expression : "<<b[0].co;
			for(i=1;i<=de2;i++)
			{
				cout<<"+"<<b[i].co<<"x^"<<b[i].exp;
			}
		}
		void add()
		{
			if(de1>de2)
			{
				for(i=0;i<=de2;i++)
				{
					c[n].co=a[i].co+b[i].co;
					c[n].exp=a[i].exp;
					n++;
				}
				for(i=de2+1;i<=de1;i++)
				{
					c[n].co=a[i].co;
					c[n].exp=a[i].exp;
					n++;
				}
			}
			else
			{
				for(i=0;i<=de1;i++)
				{
					c[n].co=a[i].co+b[i].co;
					c[n].exp=a[i].exp;
					n++;
				}
				for(i=de1+1;i<=de2;i++)
				{
					c[n].co=b[i].co;
					c[n].exp=b[i].exp;
					n++;
				}
			}
			cout<<endl<<"Sum = "<<c[0].co;
			for(i=1;i<n;i++)
			{
				cout<<"+"<<c[i].co<<"x^"<<c[i].exp;
			}
		}
};
int main()
{
	polynomial obj;
	obj.read();
	obj.display();
	obj.add();
	return 0;
}

