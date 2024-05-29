#include <iostream>
#include<conio.h>
using namespace std;
class CNode
{
	public:
		int info;
		CNode*next;
};
class list : public CNode
{
	CNode *first,*last;
	public:
		linklist()
		{
			first=NULL;
			last=NULL;
		}
		void create()
		{
			int numnode;
			cout<<"enter number of nodes"<<endl;
			cin>>numnode;
			CNode *temp;
			for(int i=0;i<numnode;i++)
			{
				temp=new CNode;
				int n;
				cout<<"enter elements:"<<endl;
				cin>>n;
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
					last->next=first;
				}
			}
		}
		void display()
		{
			CNode *temp=first;
			if(temp==NULL)
			{
				cout<<"list is empty"<<endl;
			}
			while(temp->next!=first)
			{
				cout<<temp->info;
				cout<<"--->";
				temp=temp->next;
			}
			cout<<temp->info;
		}
};
	int main()
	{
		list I;
		I.create();
		I.display();
		return 0;
	}
