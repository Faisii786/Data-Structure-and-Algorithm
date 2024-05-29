#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
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
	void adding()
	{
		
			Node*pre,*current,*temp;
			int y,n,pos=1;
			cout<<"enter position where you want to add node:"<<endl;
			cin>>y;
			cout<<"enter value in new node:"<<endl;
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
				cout<<"value you enter is more than nodes you created:"<<endl;
			}
			
	}
	
void del()
{
		Node*pre,*current,*temp;
			int y,n,pos=1;
			cout<<"enter  node where you want to delete:"<<endl;
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
				cout<<"Node deleted is:"<<current->info<<endl;
				pre->next=current->next;
			}
			else
			{
				cout<<"value you enter is more than nodes you created:"<<endl;
			}
}
	void display()
	{
		Node*temp=first;
		if(first==NULL)
		{
			cout<<"list is empty:"<<endl;
		}
		
		while(first!=NULL)
		{
			cout<<temp->info;
			cout<<"-->";
			temp=temp->next;
		}
		cout<<"NULL";
	}
};
int main(int argc, char** argv) {
	link obj;
	int ch;
	cout<<"Enter the no of nodes you want to add "<<endl;
	cin>>ch;
	for(int i=0;i<ch;i++)
	{
		obj.create(i);
	}
	obj.adding();
	obj.del();
	obj.display();
		
	return 0;
}
