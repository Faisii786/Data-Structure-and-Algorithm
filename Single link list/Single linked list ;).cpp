#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
		int data;
		node*next;
};
class linked_list
{
	private:
		node*first;
		node*last;
		node*tmp,*current,*pre;
		int n,i,size;
		public:
			linked_list()
			{
				first=NULL;
				last=NULL;
			}
			void add_node()
			{
				cout<<"Enter no of nodes u want: ";
				cin>>size;
				cout<<"\n";
				for(i=1;i<=size;i++)
				{
					cout<<"Enter value for node: ";
			    	tmp=new node;
			    	cin>>n;
			        tmp->data=n;
			    	tmp->next=NULL;
			    	if(first==NULL)
			    	{
			    		first=tmp;
			    		last=first;
               		}
					else
					{
						last->next=tmp;
						last=tmp;
					}
				}
			}
		    void add_first()
		    {
			    int a;
			    tmp=new node;
			    cout<<"\nEnter data for first node: ";
			    cin>>a;
		    	tmp->data=a;
		    	tmp->next=first;
		    	first=tmp;
		    }
		    void add_last()
		    {
		    	int a;
		    	tmp=new node;
		    	cout<<"Enter data for last node: ";
			    cin>>a;
			    tmp->data=a;
			    tmp->next=NULL;
			    last->next=tmp;
			    last=tmp;
		    }
		    void del_first()
		    {
		    	cout<<endl;
			    tmp=first;
			    tmp=tmp->next;
			    first=tmp;
		    }
			void display()
			{
				tmp=first;
			    cout<<"\nNodes you enterd are: ";	
				while(tmp!=NULL)
				{
					cout<<"\t"<<tmp->data;
					tmp=tmp->next;
				}	
			}
			void del_display_last()
	    	{
		    	current=first;	
		    	while(current!=last)
		    	{
			    	cout<<"\t"<<current->data;
			    	pre=current;
			    	current=current->next;
		    	}
		    	if(current==last)
		    	{
			    	pre=current;
			    	pre->next=NULL;
			    	last=pre;
		     	}
	     	}
};
int main()
{
	linked_list obj;
	obj.add_node();
	obj.add_first();
	obj.add_last();
	obj.display();
	obj.del_first();
	cout<<"Deleting first and last node: ";
	obj.del_display_last();
	return 0;
}
 
