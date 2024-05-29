#include <iostream>
using namespace std;

class stack
{
	public:
		int stack1[100],stack2[100],stack3[100],t,top,tops,n,val;
		stack()
		{
			tops=-1;
			top=-1;
			t=-1;
			n=100;
		}
		
		void push()
		{
			int p;
			if(top==n-1)
			{
				cout<<" stack 2 is overflow...."<<endl;
			}
			if(tops==n-1)
			{
				cout<<" stack 2 is overflow...."<<endl;
			}
			else
			{
					int u;	
					cout<<"\t\tEnter no of values want to add in stack 1 and 2"<<endl;
					cin>>u;
						cout<<"Enter value in stack 1-->"<<endl;
				for(int i=0;i<u;i++)
				{
				cin>>val;
			    top++;
			    stack1[top]=val;
		     	}
				cout<<"Enter value in stack 2-->"<<endl;
	           for(int i=0;i<u;i++)
				{				
				cin>>val;
			    tops++;
			    stack2[tops]=val;	
				}   
			}
			
		}
		
		void pop()
		{
			if(top==n-1)
			{
				cout<<"stack 1 is empty......"<<endl;
			}
			else
			if(tops==n-1)
			{
				cout<<"stack 2 is empty......"<<endl;
			}
			else
			{
				cout<<stack1[top]<<" value is deleted from the stack 1.."<<endl;
				top--;
					cout<<stack2[tops]<<" value is deleted from the stack 2.."<<endl;
				tops--;
			}
			cout<<endl;
		}

		void display()
		{
			if(top==n-1)
			{
				cout<<"stack 1  is empty nothing to display.."<<endl;
			}
			else
			if(tops==n-1)
			{
				cout<<"stack 2 is empty nothing to display.."<<endl;
			}
			else
			{
				cout<<"value remaining in the stack  1 is "<<endl;
				for(int i=0;i<=top;i++)
				{
					cout<<stack1[i*2]<<"\t";
				}
				cout<<endl;
				cout<<"value remaining in the stack  2 is "<<endl;
				for(int i=0;i<=tops;i++)
				{
					cout<<stack2[i*2]<<"\t";
				}
				cout<<endl;
			}
		}
		
		void addition()
		{
			if(t==n-1)
			{
				cout<<"stack 3 is empty"<<endl;
			}
			else
			{
				int u;
				cout<<"Enter no of values want to add from both stack-->";
				cin>>u;
				cout<<"After Addition values in stack 3 are"<<endl;
				for(int i=0;i<u;i++)
				{
				t++;
				stack3[t]=stack1[top]+stack2[tops];
				cout<<stack3[t]<<"\t";
				top--;
				tops--;
			}
			cout<<endl;
			}
			
		}
};
int main(int argc, char** argv) {
	stack obj;
	int ch;
			while(ch!=5)
			{
			cout<<"(1)Insert element to stack 1 and 2:\t";
			cout<<"(2)Delete element from stack:\n"<<endl;
			cout<<"(3)Display all the elements of stack:\t";
			cout<<"(4)to add values of stack 1 and 2 and place them in stack 3"<<endl;
			cout<<"\n(5)Exit"<<endl;
				cout<<"\nEnter your choice----->:";
				cin>>ch;
				switch(ch) 
				{
					case 1: 
						obj.push();
						break;
					case 2: 
						obj.pop();
						break;
					case 3: 
						obj.display();
						break;
						case 4:
							obj.addition();
							break;
					case 5: 
						cout<<"Exit"<<endl;
						break;
					default: 
						cout<<"Invalid choice"<<endl;
				}
			} 
	return 0;
}
