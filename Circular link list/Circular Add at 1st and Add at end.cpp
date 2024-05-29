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
		node*first,*last,*tmp;
		int i,size,n;
		circular_linkedlist()
		{
			first=NULL;
			last=NULL;
		}
		void create_node();
		void node_in_begning();
		void node_at_end();
		void display();
};
void circular_linkedlist::create_node()
{
	cout<<"Enter the number of nodes you want :"<<endl;
	cin>>size;
	for(i=1;i<=size;i++)
	{
		cout<<"Enter the value for node "<<i<<endl;
		cin>>n;
		tmp=new node;
		tmp->data=n;
		tmp->next=NULL;
		if(first==NULL)
		{
			first=tmp;
			last=first;
		}
		else
		{
		    last->next=tmp;
			last=tmp;
			last->next=first;
		}
	}
}
void circular_linkedlist::node_in_begning()
{
	tmp=new node;
	cout<<"Enter data for node in begning :"<<endl;
	cin>>n;
	tmp->data=n;
	tmp->next=NULL;
	tmp->next=first;
	first=tmp;
}
void circular_linkedlist::node_at_end()
{
	tmp=new node;
	cout<<"Enter data for node at the end :"<<endl;
	cin>>n;
	tmp->data=n;
	last->next=tmp;
	last=tmp;
	last->next=first;
}
void circular_linkedlist::display()
{
	tmp=first;
	cout<<"Nodes you entered are :"<<endl;
	while (tmp->next!=first)
	{
		cout<<tmp->data<<endl;
		tmp=tmp->next;
	}
	cout<<tmp->data<<endl;
}
int main()
{
	circular_linkedlist obj;
	obj.create_node();
	obj.node_in_begning();
    obj.node_at_end();
	obj.display();
	return 0;
}
