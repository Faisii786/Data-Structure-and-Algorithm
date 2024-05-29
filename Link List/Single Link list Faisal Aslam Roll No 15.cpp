#include <iostream>
using namespace std;

class Node
{
	public:
		int info;
		Node*next;		
};
	class link:public Node
	{
		public:
			Node*first,*last;
		
			link()
			{
			first=NULL;
			last=NULL;
			}
	
		void create(int i)
		{	
			int n;
			cout<<"Enter value in node:"<<i+1<<endl;
			cin>>n;
			Node*temp;
			temp=new Node;		
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
		void addAnyPoss()
		{
			Node*pre,*current,*temp;
			int y,n,pos=1;
			cout<<"Enter position where you want to add node:"<<endl;
			cin>>y;
			cout<<"Enter value in new node:"<<endl;
			cin>>n;
			pre=NULL;
    		current=first;
			temp=new Node;
			temp->info=n;
			temp->next=NULL;	
			while(pos!=y)
			{
				pre=current;
				current=current->next;
				pos++;
			}
			if(pos==y)
			{
				pre->next=temp;
				temp->next=current;
			}
			else
			{
				cout<<"Value you enter is more than nodes you created:"<<endl;
			}
	}
	
		void delAnyPoss()
		{
			Node*pre,*current,*temp;
			int y,n,pos=1;
			cout<<"Please Enter the possition where you want to delete Node:"<<endl;
			cin>>y;
			pre=NULL;
    		current=first;
			while(pos!=y)
			{
				pre=current;
				current=current->next;
				pos++;
			}
			if(pos==y)
			{
				cout<<"Deleted Node is:"<<current->info<<endl;
				pre->next=current->next;
			}
			else
			{
				cout<<"The Value you Enter is more than nodes you created:"<<endl;
			}
		}
		void display()
		{
			Node*temp=first;
			if(first==NULL)
			{
				cout<<"List is Empty:"<<endl;
			}
			while(first!=NULL)
			{
				cout<<temp->info;
				cout<<"-->";
				temp=temp->next;
			}
				cout<<"Empty";
		}
		};
	
	int main()
	{
		link obj;
		int choice;
		cout<<"Enter the number of nodes you want to add:"<<endl;
		cin>>choice;
		for(int i=0;i<choice;i++)
		{
		obj.create(i);
		}
		obj.addAnyPoss();
		obj.delAnyPoss();
		obj.display();	
		return 0;
	}
