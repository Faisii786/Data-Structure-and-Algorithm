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
		void create()
		{
			int num,size;
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
			Node*temp=first;
			cout<<"Information of linklist"<<endl;
			if(temp==NULL)
			{
				cout<<"list is empty"<<endl;
			}
			while(temp!=NULL)
			{
				cout<<temp->data<<endl;
				temp=temp->next;
			}
		}
		void addstart(){
			int c;
			cout<<"Enter the value at begninig"<<endl;
			cin>>c;
			temp=new Node;
			temp->data=c;
			temp->next=first;
			first=temp;		
		}
		void addend(){   	
			int p;
			cout<<"Enter the value at end"<<endl;
			cin>>p;
			temp=new Node;
			temp->data=p;
			temp->next=NULL;
			last->next=temp;
			last=temp;	
		}
		void deletestart()
		{
			temp=first;
			temp=temp->next;
			first=temp;
		}
		void deletelast()
		{
			current=first;
		while(current!=last)
		{
			pre=current;
			current=current->next;
		}
		if(current==last)
		{
			pre->next=NULL;
			last=pre;
		}
		}
		
};
int main()
{
	Node N;
	int ch;
	cout<<"1-Create\n2-Display linklist\n3-Add at begning\n4-Add node at end\n5-Delete start node\n6-Delete end node\n7-Exit"<<endl;
	while(ch!=7)
	{
	cout<<"Enter choice in integers(Must be 1 to 7)"<<endl;
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
					N.addstart();
					break;
					case 4:
						N.addend();
						break;
						case 5:
							N.deletestart();
							break;
							case 6:
								N.deletelast();
								break;
	}
}
	return 0;
}


