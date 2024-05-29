#include<iostream>
#include<conio.h>
using namespace std;
class node
{
	public:
	int info;
	node*next;
};
class list
{
	node *first;
	node *last;
	node *current;
	node *previous;
	node *temp;
	public:
		list()
		{
			first=NULL;
			last=NULL;
		}
		void create()
		{
			int n,size;
			cout<<"enter number of nodes"<<endl;
			cin>>size;
			for(int i=0;i<size;i++)
			{
				cout<<"enter value for node.."<<endl;
				cin>>n;
			    temp=new node;
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
		}
		void display()
		{
			temp=first;
			cout<<"Displaying Information"<<endl;
			if(temp==NULL)
			{
				cout<<"list is empty..."<<endl;
			}
			while(temp!=NULL)
			{
				cout<<temp->info<<endl;
				temp=temp->next;
			}
		}
		void insertatbeg()
		{
			int v;
			cout<<"\nEnter the value at begninig"<<endl;
			cin>>v;
			temp=new node;
			temp->info=v;
			temp->next=first;
			first=temp;
		}
		void insertatend()
		{   
			int f;
			cout<<"\nEnter the value at end";
			cin>>f;
			temp=new node;
			temp->info=f;
			temp->next=NULL;
			temp->next=temp;
		}
		void delatbeg()
		{
			first=first->next;
			temp->next=NULL;
		}
		void delatend()
		{
			current=first;
			while(current!=last)
			{
				previous=current;
				current=current->next;
			}
			if(current==last)
		{
			previous->next=NULL;
			last=previous;
		}	
		}
		
};
int main()
{
	list obj;
	int choice;
	while(choice!=7)
	{
	cout<<"\nMenu \n1-Create\t 2-Add at begning\n3-Add at end\t4-Display \n5-Delete at first \t6-Delete at last \n7-Exit"<<endl;
	cout<<"Enter choice"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
			obj.create();
			break;
			case 2:
				obj.insertatbeg();
				break;
				case 3:
					obj.insertatend();
					break;
					case 4:
						obj.display();
						break;
						case 5:
							obj.delatbeg();
							break;
							case 6:
								obj.delatend();
								break;
	}
}
cout<<"Thank you for using our services"<<endl;
	return 0;
}


