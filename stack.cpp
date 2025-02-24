#include<iostream>
using namespace std;
class Stack
{
	int stack[30],top=0,item,i,n;
	public:
		void read()
		{
			cout<<"Enter the size of the stack : ";
			cin>>n;
		}
		void push()
		{
			cout<<"Enter the element to push : ";
			cin>>item;
			if(top>=n)
			{
				cout<<endl<<"STACK IS FULL!"<<endl;
			}
			else
			{
				top=top+1;
				stack[top]=item;
			}
		}
		void pop()
		{
			if(top==0)
			{
				cout<<endl<<"STACK IS EMPTY!"<<endl;
			}
			else
			{
				item=stack[top];
				top=top-1;;
			}
		}
		void display()
		{
			if(top==0)
			{
				cout<<endl<<"STACK IS EMPTY!"<<endl;
			}
			cout<<endl<<"DISPLAYING STACK : ";
			for(i=top;i>0;i--)
			{
				cout<<stack[i]<<" ";
			}
		}
};
int main()
{
	Stack obj;
	int ch;
	obj.read();
	do
	{
		cout<<endl<<"1)PUSH"<<endl<<"2)POP"<<endl<<"3)DISPLAY"<<endl<<"4)EXIT"<<endl<<"Enter your choice : ";
		cin>>ch;
		switch(ch)
		{
			case 1 : obj.push();
						break;
			case 2 : obj.pop();
						break;
			case 3 : obj.display();
						break;
			case 4 : cout<<"EXIT!";
						break;
			default : cout<<"INVALID CONDITION!";
		}
	}while(ch!=4);
	return 0;
}
