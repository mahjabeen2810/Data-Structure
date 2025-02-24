#include<iostream>
#include<cstring>
using namespace std;
class substring
{
	int i,j,k,start,len,endlen;
	char str[30],substr[30];
	public:
		void read()
		{
			cout<<"Enter a string : ";
			gets(str);
			cout<<"Enter the starting position of the substring : ";
			cin>>start;
			cout<<"Enter the length of the substring : ";
			cin>>endlen;
			len=strlen(str);
			if(start>=0 && start<30 &&endlen<=len)
			{
				strings();
			}
			else
			{
				cout<<"VALUES ARE INVALID!";
			}
		}
		void strings()
		{
			for(i=start,j=0;str[i]!='\0' && endlen>0;i++,j++)
			{
				substr[j]=str[i-1];
				endlen--;
			}
			substr[j]='\0';
			cout<<"Sub String = ";
			for(k=0;substr[k]!='\0';k++)
			{
				cout<<substr[k];
			}
		}
};
int main()
{
	substring obj;
	obj.read();
	return 0;
}
