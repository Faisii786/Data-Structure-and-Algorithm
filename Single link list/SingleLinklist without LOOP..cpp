#include<bits/stdc++.h>
using namespace std;
class Node
{
	public:
	int info;
	Node*next;
};
class List:public Node
{
	Node*first;
	Node*last;
	Node*temp;
	public:
		List()
		{
			first==NULL;
			last==NULL;
		}
		void create();
		void display();
};
void List::create()
{
	temp=new Node;
	int n;
	cout<<"Enter an element..";
	cin>>n;
	temp->info=n;
	temp->next=NULL;
	if(first==NULL)
	{
		first=temp;
		last=first;
    }
    else
    {
    	last->next=temp;
    	last=temp;
	}
}
void List::display()
{
	Node*temp=first;
	if(temp==NULL)
	{
		cout<<"empty list"<<endl;
	}
	while(temp!=NULL)
	{
		cout<<temp->info;
		cout<<"...";
		temp=temp->next;
	}
	cout<<"NULL";
	
}
int main()
{
	List obj;
	int ch;
	while(1)
	{
		cout<<"enter 1 for new Node \n 2 for display\n 3 for exit..."<<endl;
		cout<<"Enter your choice:";
		cin>>ch;
		switch(ch)
		{
		
		case 1:
			obj.create();
			break;
			case 2:
				obj.display();
				break;
				case 3:
					return 0;
					break;
				}	
	}
	return 0;
}
