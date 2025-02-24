#include<iostream>
#include<cmath>
using namespace std;
class polynomial
{
	int a[10],b[10][10],i,k,m,n,j,num,sum=0;
	public:
		void read()
		{
			cout<<"Enter the degree of the polynomial : ";
			cin>>n;
			num=n;
			for(i=0;i<=num;i++,n--)
			{
				cout<<"Enter the "<<n<<" degree coefficient of the polynomial : ";
				cin>>a[i];
			}
			cout<<"Enter the value of x : ";
			cin>>m;
		}
		void evaluate()
		{
			k=num;
			for(i=0,j=0;i<=num;i++)
			{
				b[j][i]=a[i];
			}
			for(i=0,j=1;i<=num;i++)
			{
				b[j][i]=k;
				k--;
			}
			for(i=0,j=0;i<=num;i++)
			{
				sum=sum+b[j][i]*pow(m,b[j+1][i]);
			}
		}
		void display()
		{
			cout<<"The result of the expression = "<<sum;
		}
};
int main()
{
	polynomial obj;
	obj.read();
	obj.evaluate();
	obj.display();
	return 0;
}
