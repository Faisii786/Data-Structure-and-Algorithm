#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
using namespace std;
class node
{
	public:
		int info;
		node*next;
};
class List
{
	node*first;
	node*last;
	node*temp;
	public:
		List()
		{
			first=NULL;
			last=NULL;
		}
		void create()
		{
			int n,size;
			cout<<"Enter size of nodes:"<<endl;
			cin>>size;
			for(int i=0;i<size;i++)
			{
				cout<<"Enter the value for node.."<<endl;
				cin>>n;
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
					last->next=first;
				}
			}
		}
		void display()
		{
			temp=first;
			if(temp==NULL)
			{
				cout<<"list is empty.."<<endl;
			}
			while(temp!=NULL)
			{
				cout<<"\n"<<temp->info;
				temp=temp->next;
			}			
		}
    };
    int main()
    {
    	List obj;
    	obj.create();
    	obj.display();
    	return 0;
	}
