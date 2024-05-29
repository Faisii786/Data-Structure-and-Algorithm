#include <iostream>
using namespace std;
class Node
{
	public:
		int data;
		Node *next;
		Node *first;
		Node *last;
		Node *pre;
		Node *current;
		Node *temp;
		
		Node()
		{
			first=NULL;
			last=NULL;
			pre=NULL;
			current=NULL;
		}
		
			void create()
			{
				int num,size;
				cout<<"Enter size of Circular linklist:"<<endl;
				cin>>size;
				for(int i=0;i<size;i++)
				{
					cout<<"Enter value:"<<endl;
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
				cout<<"Information in linklist:"<<endl;
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
			
			void addatbeg()
			{
				int v;
				cout<<"Enter the value at begninig:"<<endl;
				cin>>v;
				temp=new Node;
				temp->data=v;
				temp->next=first;
				last->next=temp;
				first=temp;		
			}
	
			void addatend()
			{   	
				int f;
				cout<<"Enter the value at end:"<<endl;
				cin>>f;
				temp=new Node;
				temp->data=f;
				temp->next=first;
				last->next=temp; 
				last=temp;	
			}
		
			void delatbeg()
			{
				Node *temp=first;
				temp=temp->next;
	       		first=temp;
	       	 	last->next=temp;
			}
		
			void delatend()
			{
				current=first;
				while(current!=last)
			{
				pre=current;
				current=current->next;
			}
			if(current==last)
			{
				pre->next=first;
				last=pre;
			}
		}
};

	int main()
 	{
		Node R;
		int ch;
		cout<<"1-Create\t\t2-Display linklist\n3-Add at begning\t4-Add at ending\n5-Delete first node\t6-Delete last node\n7-Bye Bye\n"<<endl;
		while(ch!=7)
		{
			cout<<"Enter choice:"<<endl;
			cin>>ch;
			switch(ch)
		{
			case 1:
				R.create();
				break;
			case 2:
				R.display();
				break;
			case 3:
				R.addatbeg();
				break;
			case 4:
				R.addatend();
				break;
			case 5:
				R.delatbeg();
				break;
			case 6:
				R.delatend();
				break;
		}	
	}
		return 0;
}
