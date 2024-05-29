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
	Node()
	{
		first=NULL;
		last=NULL;
		current=NULL;
		pre=NULL;
	}
	int size;
   void create()
		{
			int num;
			cout<<"Enter size of linklist"<<endl;
			cin>>size;
			for(int ii=0;ii<size;ii++)
			{
				cout<<"Enter value"<<endl;
				cin>>num;
			    temp=new Node;
			    temp->data=num;
			    temp->next=NULL;
			    if(first==NULL)
			    {
				first=last;
				last=temp;
				first=temp;
			    }
			    else
				{
					last->next=temp;
					temp->next=first;
					last=temp;
				}
			}
		}
		void display()
		{
			temp=first;
			cout<<"Information in linklist"<<endl;
			if(temp==NULL)
			{
				cout<<"list is empty"<<endl;
			}
			while(temp->next!=first)
			{
				cout<<temp->data<<endl;
				temp=temp->next;
			}
			cout<<temp->data<<endl;
		}
	void addnode()
	{
		int n,pos,count=1;
		cout<<"Enter adding position of node"<<endl;
	    cin>>pos;
		cout<<"Enter the value for node"<<endl;
		cin>>n;
		temp=new Node;
		temp->data=n;
		temp->next=NULL;
	    current=first;
		while(count!=pos)
	    {
	    	pre=current;
	    	current=current->next;
	    	count++;
		}
		if(count==pos && pos!=1)
		{
	    	pre->next=temp;
			temp->next=current;
		}
		else if(count==pos && pos==1)
		{
			temp->next=first;
			first=temp;
			last->next=first;
		}
		else if(count==pos && pos==size)
		{
			current->next=temp;
			temp->next=first;
		}
		else
		{
			cout<<"Unable to add node"<<endl;
		}
	   }
   void deletenode()
	{
		int count=1,pos;
		cout<<"Enter node number which node you want to delete node"<<endl;
	    cin>>pos;
		current=first;
		while(count!=pos)
		{
			pre=current;
			current=current->next;
			count++;
			}
		if(count==pos && pos!=1)
		{
			pre->next=current->next;
			current=NULL;
		}
		else if(count==pos && pos==1)
		{
			first=first->next;
			current->next=NULL;
			current=first;
			last->next=first;
		}
		else if(count==pos &&pos==size)
		{
			pre->next=first;
			last=pre;
		}
    }
};
int main()
{
	Node N;
	int ch;
	cout<<"1-Create\n2-Display linklist\n3-Add node\n4-Delete node\n5-Exit"<<endl;
	while(ch!=5)
	{
	cout<<"Enter choice in integers(Must be 1 to 5)"<<endl;
	cin>>ch;
	switch(ch)
	{
		case 1:
			N.create();
			break;
			case 2:
				N.display();
				break;
				case 3:
					N.addnode();
					break;
					case 4:
				    	N.deletenode();
						break;
	}
}
	return 0;
}


