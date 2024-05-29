#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
		int data;
		node*pre;
		node*next;
};
class linked_list
{
	public:
		int size,i,n;
		node*first,*last,*tmp,*alpha,*cur,*beta;
		linked_list()
		{
			first=NULL;
			last=NULL;
		}
		void create_node()
		{
			cout<<"Enter the number of nodes you want: ";
			cin>>size;
			cout<<"\n";
			for(i=1;i<=size;i++)
			{
				cout<<"Enter the data for node: ";
				cin>>n;
				tmp=new node;
				tmp->data=n;
				tmp->pre=NULL;
				tmp->next=NULL;
				if(first==NULL)
				{
					first=tmp;
					last=first;
				}
				else
				{
					tmp->pre=last;
					last->next=tmp;
					last=tmp;
				}
			}
		}
		void node_choice()
		{
			size++;
		    int count=1;
		    cur=first;
			int pos;
			cout<<"\nEnter the location where you want to add node: ";
			cin>>pos;
            while(count!=pos)
			{
				alpha=cur;
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
		      	tmp->pre=NULL;
		      	tmp->next=NULL;
	           	tmp->next=first;
	           	first->pre=tmp;
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
		        tmp->pre=last;
		        last=tmp;
       		}
		    else if (count==pos)
			{
        		tmp=new node;
			    cout<<"Enter data for node;";
			    cin>>n;
			    tmp->data=n;
				tmp->next=NULL;
				alpha->next=tmp;
				tmp->pre=alpha;
				tmp->next=cur;
				cur->pre=tmp;
			}		 
		}
		void display()
		{
			tmp=first;
			cout<<"\nNodes in ascending order: ";
			while(tmp!=NULL)
			{
				cout<<tmp->data<<"\t";
				tmp=tmp->next;
			}
			tmp=last;
			cout<<"\nNodes in descending order: ";
			while(tmp!=NULL)
			{
				cout<<tmp->data<<"\t";
				tmp=tmp->pre;
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
			    alpha=cur;
				cur=cur->next;
				count++;
			} 
			if(pos==1)
			{ 
			    cout<<endl;
			    tmp=first;
			    tmp=tmp->next;
			    tmp->pre=NULL;
			    first=tmp; 
		    }
		    else if(pos==size)
		    {
		    	tmp=last;
			    tmp=tmp->pre;
			    tmp->next=NULL;
			    last=tmp;
			}
			else if(count==pos)
			{
				beta=cur->next;
			    alpha->next=beta;
			    beta->pre=alpha;
				cur=NULL;
			}		
		}
};
int main()
{
	linked_list obj;
	obj.create_node();
	obj.node_choice();
	obj.display();
	obj.del();
	obj.display();
	return 0;

}
