#include<iostream>
using namespace std;
class Stack
{
	int stack[30],top=-1;
	public:
		void push(int x)
		{
			stack[++top]=x;
		}
		int pop()
		{
			return stack[top--];
		}
};
int main()
{
	Stack obj;
	int n1,n2,n3,num;
	char exp[30],*e;
	cout<<"Enter the expression : ";
	cin>>exp;
	e=exp;
	while(*e!='\0')
	{
		if(isdigit(*e))
		{
			num=*e-48;
			obj.push(num);
		}
		else
		{
			n1=obj.pop();
			n2=obj.pop();
			switch(*e)
			{
				case '+': n3=n1+n2;
							break;
				case '-': n3=n2-n1;
							break;
				case '*': n3=n1*n2;
							break;
				case '/': n3=n2/n1;
							break;
				default: cout<<"INVALID CONDITION!";	
			}
			obj.push(n3);
		}
		e++;
	}
	cout<<"The result of the expression : "<<obj.pop();
	return 0;
}
