#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
		int info;
		node*previous;
		node*next;
};
class doubly_linked_list
{
	public:
		int size,i,n;
		node*first;
		node*last;
		node*temp;
		doubly_linked_list()
		{
			first=NULL;
			last=NULL;
		}
		
		void create_node();
		
		void add_beg();
		
		void add_last();
		
		void del_beg();
		
		void del_last();
		
		void display();
		
};

void doubly_linked_list::create_node()
{
			cout<<"Enter the number of nodes you want: ";
			cin>>size;
			cout<<"\n";
			for(i=0;i<size;i++)
			{
				cout<<"Enter value: "<<endl;
				cin>>n;
				temp=new node;
				temp->info=n;
				temp->previous=NULL;
				temp->next=NULL;
				if(first==NULL)
				{
					first=temp;
					last=first;
				}
				else
				{
					temp->previous=last;
					last->next=temp;
					last=temp;
				}
			}	
}
		
		void doubly_linked_list::add_beg()
		{
			temp=new node;
			cout<<"\nEnter the value for first node: ";
			cin>>n;
			temp->info=n;
			temp->previous=NULL;
			temp->next=NULL;
			temp->next=first;
			first->previous=temp;
			first=temp;
		}
		
		void doubly_linked_list:: add_last()
		{
			temp=new node;
			cout<<"Enter the value for last node: ";
			cin>>n;
			temp->info=n;
			temp->previous=NULL;
			temp->next=NULL;
			temp->previous=last;
			last->next=temp;
			last=temp;
		}
		
		void doubly_linked_list:: del_beg()
		{
			temp=first;
			temp=temp->next;
			temp->previous=NULL;
			first=temp;
		}
		
		void doubly_linked_list::del_last()
		{
			temp=last;
			temp=temp->previous;
			temp->next=NULL;
			last=temp;
		}
		
		void doubly_linked_list::display()
		{
			temp=first;
			cout<<"\nNodes in Forward order:\n ";
				if(temp==NULL)
			{
				cout<<"list is empty"<<endl;
			}
			
			while(temp!=NULL)
			{
				cout<<temp->info<<"\n";
				temp=temp->next;
			}
			
			temp=last;
			cout<<"Node in Reverse order: \n";
				if(temp==NULL)
			{
				cout<<"list is empty"<<endl;
			}
			
			while(temp!=NULL)
			{
				cout<<temp->info<<"\n";
				temp=temp->previous;
			}
		}
		
		
int main()
{
	doubly_linked_list obj;
	obj.create_node();
	obj.add_beg();
	obj.add_last();
	obj.display();
	cout<<"=============================";
	obj.del_beg();
	obj.del_last();
	cout<<"\nOperation DELETE:\n";
	obj.display();
	return 0;
}
