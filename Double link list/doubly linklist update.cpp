#include<iostream>
using namespace std;
class Node
{
	public:
		int data;
		Node*next;
		Node*first;
		Node*last;
		Node*temp;
		Node*current;
		Node*pre;
		Node*tail;
		Node*previous;
		Node()
	{
		first=NULL;
		last=NULL;
		current=NULL;
		pre=NULL;
		tail=NULL;
	}
    	int size;
		void Create_Node()
		{
			int v;
			cout<<"Enter number of nodes:"<<endl;
			cin>>size;
			for(int i=0;i<size;i++)
			{
				cout<<"Enter value in node:"<<endl;
				cin>>v;
			    temp=new Node;
			    temp->data=v;
			    temp->pre=NULL;
			    temp->next=NULL;
			    if(first==NULL)
			    {
				first=temp;
				last=first;
				tail=first;
			    }
			    else
			       {
				     last->next=temp;
				     temp->pre=last;
				     last=temp;	
					 tail=temp;	
			       }
			}
		}
		void Display_forward()
		{
			Node*ptr=first;
			cout<<"Forward information:"<<endl;
			while(ptr!=NULL)
			{
				cout<<ptr->data<<endl;
				ptr=ptr->next;
			}
		}
		void Display_Backward()
		{
			Node*ptr=tail;
			cout<<"Backward information:"<<endl;
			while(ptr!=NULL)
			{
				cout<<ptr->data<<endl;
				ptr=ptr->pre;
			}
		}
	void Add_Node()
	{
		int n,pos,count=1;
		cout<<"Enter position where to add node:"<<endl;
	    cin>>pos;
		cout<<"Enter the value for node:"<<endl;
		cin>>n;
		temp=new Node;
		temp->data=n;
		temp->next=NULL;
		temp->pre=NULL;
	    current=first;
		while(count!=pos)
	    {
	    	previous=current;
	    	current=current->next;
	    	count++;
		}
		if(count==pos &&pos!=1)
		{
	    	previous->next=temp;
	    	temp->pre=previous;
			temp->next=current;
			current->pre=temp;
		}
		else if(count==pos && pos==1)
		{
			first->pre=temp;
			temp->next=first;
			temp->pre=NULL;
			first=temp;
		}
		else if(count==pos && pos==size)
		{
			last->next=temp;
			temp->pre=last;
			temp->next=NULL;
			last=temp;
			tail=temp;
		}
		else
		{
			cout<<"Unable to add node:"<<endl;
		}
	}
   void Delete_Node()
	{
		int count=1,pos;
		cout<<"Enter number which node you want to delete:"<<endl;
	    cin>>pos;
		current=first;
		while(count!=pos)
		{
			previous=current;
			current=current->next;
			count++;
			}
		if(count==pos && pos==1)
		{
			first=first->next;
			first->pre=NULL;
			current->next=NULL;
			current->pre=NULL;
			current=first;
		}
		else if(count==pos && pos!=1 &&pos!=size)
		{
			previous->next=current->next;
			current=current->next;
			current->pre=previous;
		}
		else if(count==pos && pos==size)
		{
			previous->next=NULL;
			current->pre=NULL;
			last=previous;
			tail=last;
		}
	}
};
	int main()
{
	Node obj;
	int ch;
	cout<<"1-Create\t\t2-Display forward\n3-Display backward\t4-Add node\n5-Delete node\t\t6-Exit\n"<<endl;
	while(ch!=6)
	{
	cout<<"Enter choice in integers:"<<endl;
	cin>>ch;
	switch(ch)
	{
		case 1:
			obj.Create_Node();
			break;
			case 2:
				obj.Display_forward();
				break;
				case 3:
					obj.Display_Backward();
					break;
					case 4:
				    	obj.Add_Node();
						break;
						case 5:
							obj.Delete_Node();
							break;
	}
}
	return 0;
}
