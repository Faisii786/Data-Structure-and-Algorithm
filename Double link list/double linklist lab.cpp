#include<iostream>
using namespace std;

class node
{
	private:
		int data;
		node*head,*first,*tail,*ptr,*pre,*next,*temp;
		public:
			node()
			{
				head=NULL;
				first=NULL;
				tail=NULL;
				temp=NULL;
		}
			void insert(int newdata)
			{
				node*newnode;
				newnode=new node;
				newnode->data=newdata;
				newnode->pre=NULL;
				newnode->next=NULL;
				if(head==NULL)
				{
					head=newnode;
					first=head;
					tail=head;
				}
				else
				{
					first->next=newnode;
					newnode->pre=first;
					first=newnode;
					tail=newnode;
				}
			}
			void displayf()
			{
				ptr=head;
				while(ptr!=NULL){
					cout<<ptr->data<<endl;
					ptr=ptr->next;
				}
			}
			void display()
			{
				ptr=tail;
				while(ptr!=NULL)
				{
					cout<<ptr->data<<endl;
					ptr=ptr->pre;
				}
			}
};


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	node obj;
	obj.insert(3);
	obj.insert(5);
	obj.insert(6);
	obj.insert(8);
	cout<<"\ndisplaying from first to last"<<endl;
	obj.displayf();
	cout<<"\ndisplaying from last to first"<<endl;
	obj.display();
	return 0;
}
