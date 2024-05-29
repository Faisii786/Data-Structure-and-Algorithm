#include<iostream>
#define SIZE 5
using namespace std;
class Stack
{
    public:
	int stk1[SIZE],stk2[SIZE],stk3[SIZE];
	int top;
	Stack()
	{
		top=-1;
	}
	int push(int,int);
    int pop();
};
int Stack::push(int n,int v)
{
	++top;
	stk1[top]=n;
	stk2[top]=v;
	return n,v;
}
int Stack::pop()
{
	int temp;
	temp=stk1[top]+stk2[top];
	stk3[top]=temp;
	--top;
	return temp;
}
int main()
{
	Stack obj;
	int choice,n,v,temp;
	do
	{
		cout<<endl;
		cout<<"1 - push items"<<endl;
		cout<<"2 - pop items"<<endl;
		cout<<"3 - exit"<<endl;
		cout<<"enter your choice :"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
				
				for(int i=0;i<SIZE;i++)
				{
					cout<<"enter item to insert in stack 1;"<<endl;
					cin>>n;
					cout<<"enter item to insert in stack2;"<<endl;
					cin>>v;
					temp=obj.push(n,v);
					if (temp==0)
					{
						cout<<"stack is full "<<endl;
					}
					else 
					{
						cout<<temp<<" inserted "<<endl;
					}
				}
		        break;
			case 2:
				for(int i=SIZE;i>0;i--)
				{
			    	temp=obj.pop();
			    	if(temp==0)
			    	{
				    	cout<<" Stack is empty "<<endl;
			    	}
				    else
			    	{
				    	cout<<"value in stack 3 is"<<temp<<endl;
			    	}
			    }
			    break;
			    case 3: 
			     cout<<"Thank you for using our services"<<endl;
				 break;
			default:
			    cout<<"an invalid choice"<<endl;	
		}
	}
	while(choice!=3);
	return 0;
}
