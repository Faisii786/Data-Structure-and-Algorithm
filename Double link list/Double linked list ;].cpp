#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
		int data;
		node*pre;
		node*next;
};
class linked_list
{
	public:
		int size,i,n;
		node*first,*last,*tmp;
		linked_list()
		{
			first=NULL;
			last=NULL;
		}
		void create_node()
		{
			cout<<"Enter the number of nodes you want: ";
			cin>>size;
			cout<<"\n";
			for(i=1;i<=size;i++)
			{
				cout<<"Enter the data for node: ";
				cin>>n;
				tmp=new node;
				tmp->data=n;
				tmp->pre=NULL;
				tmp->next=NULL;
				if(first==NULL)
				{
					first=tmp;
					last=first;
				}
				else
				{
					tmp->pre=last;
					last->next=tmp;
					last=tmp;
				}
			}
		}
		void add_first()
		{
			tmp=new node;
			cout<<"\nEnter data for first node: ";
			cin>>n;
			tmp->data=n;
			tmp->pre=NULL;
			tmp->next=NULL;
			tmp->next=first;
			first->pre=tmp;
			first=tmp;
		}
		void add_last()
		{
			tmp=new node;
			cout<<"Enter data for last node: ";
			cin>>n;
			tmp->data=n;
			tmp->pre=NULL;
			tmp->next=NULL;
			tmp->pre=last;
			last->next=tmp;
			last=tmp;
		}
		void del_first()
		{
			tmp=first;
			tmp=tmp->next;
			tmp->pre=NULL;
			first=tmp;
		}
		void del_last()
		{
			tmp=last;
			tmp=tmp->pre;
			tmp->next=NULL;
			last=tmp;
		}
		void display()
		{
			tmp=first;
			cout<<"\nNodes in ascending order: ";
			while(tmp!=NULL)
			{
				cout<<tmp->data<<"\t";
				tmp=tmp->next;
			}
			tmp=last;
			cout<<"\nNodes in descending order: ";
			while(tmp!=NULL)
			{
				cout<<tmp->data<<"\t";
				tmp=tmp->pre;
			}
		}
};
int main()
{
	linked_list obj;
	obj.create_node();
	obj.add_first();
	obj.add_last();
	obj.display();
	obj.del_first();
	obj.del_last();
	cout<<"\n\nAfter deleting 1st & last node :\n";
	obj.display();
	return 0;
}
