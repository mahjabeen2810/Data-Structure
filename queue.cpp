#include<iostream>
using namespace std;
class queue
{
	int q[30],front=-1,rear=-1,i,max,item,temp;
	public:
		void read()
		{
			cout<<"Enter the size of the queue : ";
			cin>>max;
		}
		void enqueue()
		{
			cout<<"Enter the element to be inserted : ";
			cin>>item;
			if(rear==max-1)
			{
				cout<<endl<<"QUEUE IS FULL!"<<endl;
			}
			else if(front==-1 && rear==-1)
			{
				front=0;
				rear=0;
				q[rear]=item;
			}
			else
			{
				rear=rear+1;
				q[rear]=item;
			}
		}
		void dequeue()
		{
			if(front==-1 || front>rear)
			{
				cout<<endl<<"QUEUE IS EMPTY!"<<endl;
			}
			else if(front==rear)
			{
				temp=q[front];
				front=-1;
				rear=-1;
			}
			else
			{
				temp=q[front];
				front=front+1;
			}
		}
		void display()
		{
			if(front==-1 || front>rear)
			{
				cout<<endl<<"QUEUE IS EMPTY!"<<endl;
			}
			else
			{
				cout<<"DISPLAYING QUEUE : ";
				for(i=front;i<=rear;i++)
				{
					cout<<q[i]<<" ";
				}
			}
		}
};
int main()
{
	queue obj;
	int ch;
	obj.read();
	do
	{
		cout<<endl<<"1)ENQUEUE"<<endl<<"2)DEQUEUE"<<endl<<"3)DISPLAY"<<endl<<"4)EXIT"<<endl<<"Enter your choice : ";
		cin>>ch;
		switch(ch)
		{
			case 1 : obj.enqueue();
						break;
			case 2 : obj.dequeue();
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
