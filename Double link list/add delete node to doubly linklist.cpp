#include<iostream>
using namespace std;
class Node
{
	public:
	int data;
	Node*next;
	Node*first;
	Node*head;
	Node*pre;
	Node*ptr;
	Node*tail;
	Node*current;
	Node*previous;
	Node*newnode;
		Node()
		{
			first=NULL;
			head=NULL;
			current=NULL;
			previous=NULL;
			tail=NULL;
			newnode=NULL;
		}
		void create()
		{
			int num,size;
			cout<<"Enter size of linklist"<<endl;
			cin>>size;
			for(int ii=0;ii<size;ii++)
			{
				cout<<"Enter value"<<endl;
				cin>>num;
			    newnode=new Node;
			    newnode->data=num;
			    newnode->pre=NULL;
			    newnode->next=NULL;
			    if(head==NULL)
			    {
				head=newnode;
				first=head;
				tail=head;
			    }
			    else
			       {
				     first->next=newnode;
				     newnode->pre=first;
				     first=newnode;	
					 tail=newnode;	
			       }
			}
		}
		void displayf()
		{
			ptr=head;
			cout<<"Information displays forward"<<endl;
			if(ptr==NULL)
			{
				cout<<"list is empty"<<endl;
			}
			while(ptr!=NULL)
			{
				cout<<ptr->data<<endl;
				ptr=ptr->next;
			}
		}
		void displayb()
		{
			ptr=tail;
			cout<<"Information displays backward"<<endl;
			if(ptr==NULL)
			{
				cout<<"list is empty"<<endl;
			}
			while(ptr!=NULL)
			{
				cout<<ptr->data<<endl;
				ptr=ptr->pre;
			}
		}
		void addstart(){
			int c;
			cout<<"Enter the value at begninig"<<endl;
			cin>>c;
			newnode=new Node;
			newnode->data=c;
			newnode->pre=NULL;
			newnode->next=head;
			head->pre=newnode;
			head=newnode;	
		}
		void addend(){   	
			int p;
			cout<<"Enter the value at end"<<endl;
			cin>>p;
			newnode=new Node;
			newnode->data=p;
			newnode->next=NULL;
			first->next=newnode;
			newnode->pre=first;
			first=newnode;
			tail=newnode;
		}
		void deletestart()
		{
			newnode=head;
			newnode=newnode->next;
			newnode->pre=NULL;
			head=newnode;
		}
		void deletelast()
		{
			current=head;
		while(current!=first)
		{
			previous=current;
			current=current->next;
		}
		if(current==first)
		{
			previous->next=NULL;
			first=previous;
			tail=previous;
		}
		}
		
};
int main()
{
	Node N;
	int ch;
	cout<<"1-Create\n2-Display forward\n3-Display Reverse\n4-Add at begning\n5-Add node at end\n6-Delete start node\n7-Delete end node\n8-Exit"<<endl;
	while(ch!=8)
	{
	cout<<"Enter choice in integers(Must be 1 to 7)"<<endl;
	cin>>ch;
	switch(ch)
	{
		case 1:
			N.create();
			break;
			case 2:
				N.displayf();
				break;
				case 3:
					N.displayb();
					break;
				 case 4:
					N.addstart();
					break;
					 case 5:
						N.addend();
						break;
						 case 6:
							N.deletestart();
							break;
							 case 7:
								N.deletelast();
								break;
	}
}
	return 0;
}


