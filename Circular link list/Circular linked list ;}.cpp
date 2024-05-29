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
		void del_node();
		void del_nodelast();
		void display();
};
void circular_linkedlist::create_node()
{
	cout<<"Enter the number of nodes you want: ";
	cin>>size;
	cout<<"\n";
	for(i=1;i<=size;i++)
	{
		cout<<"Enter the value for node: ";
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
	cout<<"\nEnter data for first node: ";
	cin>>n;
	tmp->data=n;
	tmp->next=NULL;
	tmp->next=first;
	last->next=tmp;
	first=tmp;
}
void circular_linkedlist::node_at_end()
{
	tmp=new node;
	cout<<"Enter data for last node: ";
	cin>>n;
	tmp->data=n;
	tmp->next=NULL;
	last->next=tmp;
	last=tmp;
	last->next=first;
}
void circular_linkedlist::display()
{
	tmp=first;
	while (tmp->next!=first)
	{
		cout<<"\t";
		cout<<tmp->data;
		tmp=tmp->next;
	}
	cout<<"\t"<<tmp->data<<endl;
}
void circular_linkedlist::del_node()
{
	tmp=first;
	tmp=tmp->next;
	first=tmp;
}
void circular_linkedlist::del_nodelast()
{
	tmp=first;
	node*pre,*cur;
	cur=first;
	while(cur!=last)
	{
		pre=cur;
		cur=cur->next;
	}
	if(cur==last)
    {
    	pre->next=first;
    	pre=last;
    }
}
int main()
{
	circular_linkedlist obj;
	obj.create_node();
	obj.node_in_begning();
    obj.node_at_end();
    cout<<"\nNodes you entered are: ";
   	obj.display();
	obj.del_node();
    obj.del_nodelast();
    cout<<"Deleting first and last node: ";
	obj.display();

	return 0;
}
