#include<iostream>
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
		node*first,*last,*temp;
		int i,size,n;
		circular_linkedlist()
		{
			first=NULL;
			last=NULL;
		}
		void Create_Node();
		void Add_Node();
		void Del_Node();
		void display();
	};
	void circular_linkedlist::Create_Node()
	{
	cout<<"Enter the number of nodes you want:"<<endl;
	cin>>size;
	for(i=1;i<=size;i++)
	{
		cout<<"Enter the value for node "<<i<<endl;
		cin>>n;
		temp=new node;
		temp->data=n;
		temp->next=first;
		if(first==NULL)
		{
			first=temp;
			last=first;
		}
		else
		{
		    last->next=temp;
			last=temp;
			last->next=first;
		}
	}
	};
	void circular_linkedlist::Add_Node()
	{	
			node*pre,*current,*temp;
			int a,n,pos=1;
			cout<<"Enter position where you want to add node in circular linklist:"<<endl;
			cin>>a;
			cout<<"Enter value in new node:"<<endl;
			cin>>n;
			pre=NULL;
    		current=first;
			temp=new node;
			temp->data=n;
			temp->next=NULL;
			while(pos!=a)
			{
				pre=current;
				current=current->next;
				pos++;
			}
			if(pos==a)
			{
				pre->next=temp;
				temp->next=current;
			}
			else
			{
				cout<<"Value you enter is more than nodes you created:"<<endl;
			}
			
	};
	
	void circular_linkedlist::Del_Node()
		{
			node*pre,*current,*temp;
			int b,n,pos=1;
			cout<<"Enter node where you want to delete:"<<endl;
			cin>>b;
			pre=NULL;
    		current=first;	
			while(pos!=b)
			{
				pre=current;
				current=current->next;
				pos++;
			}
			if(pos==b)
			{
				cout<<"Node deleted is:"<<current->data<<endl;
				pre->next=current->next;
			}
			else
			{
				cout<<"Value you enter is more than nodes you created:"<<endl;
			}
		};
	void circular_linkedlist::display()
	{
		temp=first;
		cout<<"Nodes you entered are:"<<endl;
		while(temp->next!=first)
		{
			cout<<temp->data<<endl;
			temp=temp->next;
		}
		cout<<temp->data<<endl;
	};
		
		int main()
		{
			circular_linkedlist obj;
			cout<<"\t1-> Create Node"<<endl;
			obj.Create_Node();
			cout<<"\t2-> Add Node"<<endl;
    		obj.Add_Node();
    		cout<<"\t3-> Delete Node"<<endl;
   		 	obj.Del_Node();
    		cout<<"\t4. Display"<<endl;
			obj.display();
			return 0;
		}
