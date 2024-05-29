#include<iostream>
using namespace std;
class Node
{
	public:
		int data;
		Node *next;
		Node *first;
		Node *head;
		Node *pre;
		Node *ptr;
		Node *tail;
		Node *current;
		Node *previous;
		Node *newnode;
		
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
		
		void addatbeg()
		{
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
		
		void addatend()
		{   	
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
		
		void delatbeg()
		{
			newnode=head;
			newnode=newnode->next;
			newnode->pre=NULL;
			head=newnode;
		}
		
		void delatend()
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
		cout<<"1-Create\t\t2-Display forward\n3-Display Reverse\t4-Add at Begning\n5-Add at Ending\t\t6-Delete at Begining\n7-Delete at Ending\t8-Exit\n"<<endl;
		while(ch!=8)
		{
			cout<<"Enter choice in Integers:"<<endl;
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
					N.addatbeg();
					break;
				case 5:
					N.addatend();
					break;
				case 6:
					N.delatbeg();
					break;
				case 7:
					N.delatend();
					break;
	}
}
		return 0;
}


