#include<iostream>
#include<conio.h>
using namespace std;

class node
{
	public:
		int info;
		node *next;
};
	class list:public node
	{
	public:
		node *first,*last,*prev,*current;
		node *temp;
		
		list()
		{
			first=NULL;
			last=NULL;
			prev=NULL;
			current=NULL;
		}
		
		void create()
		{
			int size;
			cout<<"Enter the number of nodes you want:"<<endl;
			cin>>size;
			for(int i=0;i<size;i++)
			{
			
				temp=new node;
				int n;
				cout<<"Enter an integer value:"<<endl;
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
				}
			}
		}

			void newnodeatbeg()
			{
				temp=new node;
				int beg;
				cout<<"Enter the value of Node to add at beginning"<<endl;
				cin>>beg;
				temp->info=beg;
				temp->next=first;
				first=temp;
			}
			
			void newnodeatend()
			{
				temp=new node;
				int end;
				cout<<"Enter the value of Node to add at end"<<endl;
				cin>>end;
				temp->info=end;
				temp->next=NULL;
				last->next=temp;
				last=temp;
			}
			
			void delatbeg()
			{
				temp=first;
				temp=temp->next;
				first=temp;
			}
			
			void delatend()
			{
				current=first;
				while(current!=last)
			{
				prev=current;
				current=current->next;
			}
			if(current==last)
			{
				prev->next=NULL;
				last=prev;
			}
			}
			
			void display()
			{
			node *temp=first;
			if(temp==NULL)
			{
				cout<<"List is empty:"<<endl;
			}
			while(temp!=NULL)
			{
				cout<<temp->info;
				cout<<"-->";
				temp=temp->next;
			}		
		}
};

		int main()
		{
			list obj;
			cout<<"Assalam o Alaikum:"<<endl;
			cout<<"1:"<<" Create"<<endl;
			cout<<"2:"<<" Add Node At Beginning"<<endl;
			cout<<"3:"<<" Add Node At End"<<endl;
			cout<<"4:"<<" Delete Node At Begining"<<endl;
			cout<<"5:"<<" Delete Node At End"<<endl;
			cout<<"6:"<<" Display"<<endl;
			cout<<"7:"<<" Exit"<<endl;
			int ch;
			while(ch!=7)
			{
				cout<<endl<<"Enter Your choice:"<<endl;
				cin>>ch;
				switch(ch)
				{
					case 1:
						obj.create();
						break;
					case 2:
						obj.newnodeatbeg();
						break;
					case 3:
						obj.newnodeatend();
						break;
					case 4:
						obj.delatbeg();	
						break;
					case 5:
						obj.delatend();
						break;
					case 6:
						obj.display();
						break;
					case 7:
						cout<<"\t\tProgramme Finished";
						break;			
				}
		}
   			 return 0;
}
