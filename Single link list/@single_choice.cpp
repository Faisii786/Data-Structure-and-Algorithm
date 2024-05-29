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
		node*tmp,*cur,*pre;
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
			void node_choice()
			{
				int count=1;
				cur=first;
				int pos;
				cout<<"\nEnter the location where you want to add node: ";
				cin>>pos;
	            while(count!=pos)
				{
					pre=cur;
					cur=cur->next;
					count++;
			    }  
				if(pos==1)
				{
				    int a;
			        tmp=new node;
			        cout<<"\nEnter data for first node: ";
			        cin>>a;
		        	tmp->data=a;
		        	tmp->next=first;
		        	first=tmp;
				}   	
		        else if(pos==size)
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
			    else if (count==pos)
				{
					tmp=new node;
					cout<<"Enter data for node;";
					cin>>n;
					tmp->data=n;
					tmp->next=NULL;
					pre->next=tmp;
					tmp->next=cur;
				}		 
			}
			void del()
			{
				int count=1;
			    cur=first;
				int pos;
								cout<<"\nEnter the location of node u want to del: ";
				cin>>pos;
	            while(count!=pos)
				{
					pre=cur;
					cur=cur->next;
					count++;
			    } 
				if(pos==1)
				{ 
				    cout<<endl;
			        tmp=first;
			        tmp=tmp->next;
			        first=tmp; 
		    	}
			    else if(count==pos)
				{
					pre->next=cur->next;
					cur=NULL;
				}		
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
		};
int main()
{
	linked_list obj;
	obj.add_node();
	obj.node_choice();
	obj.display();
	obj.del();
	obj.display();
	return 0;
}
