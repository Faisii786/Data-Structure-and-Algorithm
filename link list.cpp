#include<iostream>
using namespace std;
class node
{
	public:
		int info;
		node *next;
};

class list:public node
{
	private:
		node *first,*last;
		int n,nn;
	public:
		list()
		{
			first=NULL;
			last=NULL;
		}
			void create();
			void display();
	};
		void list::create()
		{
			cout<<"No of Nodes you want:";
			cin>>n;
			for(int i=0;i<nn;i++)
			{
				node *temp;
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

		void list::display()
		{
			node *temp=first;
			if(temp==NULL)
			{
				cout<<"list is empty";
			}
			while(temp!=NULL)
			{
				cout<<temp->info;
				cout<<"-->";
				temp=temp->next;
			}
		}
		

		int main()
		{
			node obj;
			cout<<"N1 Create N2 Display N3 Exit";
			int ch;
			cout<<"Enter the choice:";
			cin>>ch;
			switch(ch)
			{
				case 1:
				{
					obj.create;
					break;
				}
				case 2:
				{
					obj.display;
					break;
				}
				case:
				{
					obj.exit;
					break;
				}
			}
		}
