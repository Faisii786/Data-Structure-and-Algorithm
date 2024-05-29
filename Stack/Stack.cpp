#include <iostream>
using namespace std;

class stack
{
	public:
		int arr[100],top,n,val;
		stack()
		{
			top=-1;
			n=100;
		}
		
		void push()
		{
			if(top==n-1)
			{
				cout<<"stack is overflow...."<<endl;
			}
			else
			{
				cout<<"Enter value in stack----->"<<endl;
				cin>>val;
			    top++;
			    arr[top]=val;   
			}
			
		}
		
		void pop()
		{
			if(top==-1)
			{
				cout<<"stack is empty......"<<endl;
			}
			else
			{
				top--;
			}
		}
		
		void display()
		{
			if(top==-1)
			{
				cout<<"stack is empty nothing to display....."<<endl;
			}
			else
			{
				for(int i=0;i<=top;i++)
				{
					cout<<arr[i]<<"\t";
				}
			}
		}
};
int main() 
{
	stack obj;
	int ch;
		cout<<"(1)Insert element to stack:\t\t";
			cout<<"(2)Delete element from stack:\n"<<endl;
			cout<<"(3)Display all the elements of stack:\t";
			cout<<"(4)Exit"<<endl;
			while(ch!=4)
			{
				cout<<"\nEnter your choice--->:";
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
						cout<<"Exit"<<endl;
						break;
					default: 
						cout<<"Invalid choice"<<endl;
				}
			} 
	return 0;
}
