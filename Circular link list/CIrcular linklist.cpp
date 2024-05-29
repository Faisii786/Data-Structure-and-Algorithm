#include<bits/stdc++.h>
using namespace std;
class CNode
{
	public:
	int info;
	CNode*next;
};
class List
{
	public:
		CNode*first;
		CNode*last;
		CNode*temp;
		int n;
		list()
		{
			first=NULL;
			last=NULL;
		}
		void create()
		{	
		cout<<"Enter no of elements:";
		cin>>n;
		for(int i=0;i<n;i++)
		{
			int no;
			cout<"enter elemeny:";
			cin>>no;
			temp=new CNode;
			temp->info=n;
			temp->next=NULL;
		 
		if (first==NULL)
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
      	CNode*temp=first;
      	if(temp==NULL)
      	{
      		cout<<"Empty Node list"<<endl;
		  }
		  while(temp->next!=first)
		  {
		  	cout<<temp->info;
		  	cout<<"---";
		  	temp=temp->next;
		  }
		  cout<<temp->info;
		  cout<<"\nNULL";
	  }
};


int main()
{
	List obj;
	obj.create();
	obj.display();
	return 0;
	
}
