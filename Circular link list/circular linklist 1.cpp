#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
		int data;
		node*next;
};
class circular_linkedlist
{
	public:
		node*first,*last,*temp,*pre,*current;
		int i,size,n;
		circular_linkedlist()
		{
			first=NULL;
			last=NULL;
			pre=NULL;
			current=NULL;
			
		}
		void create_node();
		void node_at_start();
		void node_at_last();
		void delet_at_start();
		void delet_at_last();
		void display();
};
void circular_linkedlist::create_node()
{
	cout<<"Enter the number of nodes you want :"<<endl;
	cin>>size;
	for(i=1;i<=size;i++)
	{
		cout<<"Enter the value for node "<<endl;
		cin>>n;
		temp=new node;
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
			last->next=first;
		}
	}
}


void circular_linkedlist::node_at_start()
{
	temp=new node;
	cout<<"Enter data for node in begning :"<<endl;
	cin>>n;
	temp->data=n;
	temp->next=first;
	first=temp;
}


void circular_linkedlist::node_at_last()
{
	temp=new node;
	cout<<"Enter data for node at the end :"<<endl;
	cin>>n;
	temp->data=n;
	last->next=temp;
	last=temp;
	last->next=first;
}

void circular_linkedlist::delet_at_start()
		{
			node*temp=first;
			temp=temp->next;
	        first=temp;
	        last->next=temp;
		}
		
		
void circular_linkedlist::delet_at_last()
		{
			current=first;
			while(current!=last)
			{
				pre=current;
				current=current->next;
			}
			if(current==last)
			{
				pre->next=first;
				last=pre;
			}
		}

void circular_linkedlist::display()
{
	temp=first;
	cout<<"Nodes you entered are :"<<endl;
	while (temp->next!=first)
	{
		cout<<temp->data<<"\t"<<endl;
		temp=temp->next;
	}
	cout<<temp->data<<"\t"<<endl;
}

int main()
{
	circular_linkedlist obj;
	obj.create_node();
	obj.node_at_start();
    obj.node_at_last();
    obj.display();
     cout<<"<<................Node After Delete Operation........>>"<<endl;
    obj.delet_at_start();
    obj.delet_at_last();
	obj.display();
	
	return 0;
}
