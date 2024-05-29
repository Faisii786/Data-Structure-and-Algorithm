#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
	int data;
	node*next;
};
class singlylink_list
{
	public:
	node*temp,*first,*last,*prev,*current;
	int n;
	singlylink_list()
	{
		prev=NULL;
		current=NULL;
		first=NULL;
		last=NULL;
	}
	void create();
	void display();
	void add_at_first();
	void add_at_last();
	void delte_at_start();
	void delte_at_end();
};
void singlylink_list::create()	
{
	int nonode,n;
	node*temp;
	cout<<"Enter no of node u want:"<<endl;
	cin>>nonode;
	for(int i=0;i<nonode;i++)
	{
		temp=new node;
		cout<<"Enter values of node"<<endl;
		cin>>n;
		temp->data=n;
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
}
	void singlylink_list::add_at_first()
	{
		temp=new node;
		cout<<"Enter value for node at first..."<<endl;
		cin>>n;
		temp->data=n;
		temp->next=first;
		first=temp;
	}
	
	void singlylink_list::add_at_last()
	{
		temp=new node;
		cout<<"Enter value for node at last."<<endl;
		cin>>n;
		temp->data=n;
		temp->next=NULL;
		last->next=temp;
		last=temp;
	}
	
	void singlylink_list::delte_at_start()
	{
		
		node *temp=new node;
		temp=first;
		first=first->next;
		 cout<<"\nDeleted Element is "<<temp->data;
		temp->next=NULL;
		free(temp);
	}
	
	void singlylink_list::delte_at_end()
	{
        	current=first;
		while(current!=last)
		{
			prev=current;
			current=current->next;
		}
		if(current==last)
		{
			cout<<"\nDeleted Element is: "<<current->data<<endl;
			prev->next=NULL;
			last=prev;
		}
		
	}
	
	void singlylink_list:: display()
	{
		cout<<"..Values of single linklist after Operation Done.."<<endl;
	temp=first;
	
	if(temp==NULL)
	{
		cout<<"List is empty.."<<endl;
	}
	while(temp!=NULL)
	{
		cout<<temp->data<<endl;
		temp=temp->next;
	}
	
  }   
  
int main()
{
	cout<<"................................Singly link list........................"<<endl;
	singlylink_list obj;
	obj.create();
	obj.add_at_first();
	obj.add_at_last();
	obj.display();
	obj.delte_at_start();
	obj.delte_at_end();
	obj.display();
	return 0;
}
