#include<iostream>
using namespace std;

class node
{
	public:
	int info;
	node *head;
	node *next;
};

class list : public node
{
	public:
	node *first,*last;
	list()
	{
		first=NULL;
		last=NULL;
	}
	void create();
	void display();
};

void list::create()
{
	int no_nodes;
	cout<<"Enter number of nodes you want to store :";
	cin>>no_nodes;
	for(int i=0;i<no_nodes;i++)
	{
		node *temp;
        int data;
		cout<<"\nEnter value :";
		cin>>data;
		temp=new node;
		temp->info=data;
		temp->head=NULL;
		temp->next=NULL;
		if(first==NULL)
		{
			first=temp;
			last=first;
		}
		else
		{
			temp->head=last;
			last->next=temp;
			last=temp;
		}
	}
}

void list::display()
{
	node *temp;
	temp=first;
	if(first==NULL)
	{
		cout<<"List is empty";
	}
	while(temp->next!=NULL)
	{
		cout<<"\n==>"<<temp->info;
		temp=temp->next;
		if(temp->next==NULL)
		{
			cout<<"\n==>"<<temp->info;
		}
	}
}

int main()
{
	list obj;
	obj.create();
	obj.display();
	return 0;
}
