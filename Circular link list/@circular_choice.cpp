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
		node*cur,*pre;
		circular_linkedlist()
		{
			first=NULL;
			last=NULL;
		}
		void create_node();
		void node_choice();
		void del_choice();
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
void circular_linkedlist::node_choice()
{
	int count=1;
	cur=first;
	int pos;
	cout<<"\nEnter the location where you want to add node: ";
	cin>>pos;
    while(count!=pos)
	{
		pre=cur;
		cur=cur->next;
		count++;
    }  
	if(pos==1)
	{
	    int a;
	    tmp=new node;
        cout<<"\nEnter data for first node: ";
	    cin>>a;
		tmp->data=a;
		tmp->next=first;
		first=tmp;
		last->next=first;
	}   	
	else if(pos==size)
	{
   	    int a;
        tmp=new node;
        cout<<"Enter data for last node: ";
	    cin>>a;
        tmp->data=a;
	    tmp->next=first;
	    last->next=tmp;
	    last=tmp;
    }
    else if (count==pos)
	{
		tmp=new node;
		cout<<"Enter data for node;";
		cin>>n;
		tmp->data=n;
		tmp->next=NULL;
		pre->next=tmp;
		tmp->next=cur;
	}		 
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
void circular_linkedlist::del_choice()
{
    int count=1;
    cur=first;
	int pos;
	cout<<"\nEnter the location of node u want to del: ";
	cin>>pos;
	while(count!=pos)
	{
		pre=cur;
	    cur=cur->next;
		count++;
	} 
	if(pos==1)
    { 
	    cout<<endl;
		tmp=first;
	    tmp=tmp->next;
		first=tmp; 
		last->next=first;
	}
	else if(count==pos)
	{
	    pre->next=cur->next;
	    cur=NULL;
	}		
}
int main()
{
	circular_linkedlist obj;
	obj.create_node();
	obj.node_choice();
	obj.display();
	obj.del_choice();
	obj.display();
	return 0;
}
