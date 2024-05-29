#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class Que
{
	public:
		int Queue[100],n=100,rear,front,size;
		
		Que()
		{
			rear=-1;
			front=-1;
		}
		void Enqueue()
		{
			int val;
			if(rear==n-1)
			{
				cout<<"queue over flow----"<<endl;
			}
			else
			{
				if(front==-1)
				front=0;
				cout<<"Enter no of elemt want to add:"<<endl;
				cin>>size;
				cout<<"ADD element in queue....."<<endl;
				for(int i=0;i<size;i++)
				{
				
				cin>>val;
				rear++;
				Queue[rear]=val;
		    	}
			}
		}
		
		void Dequeue()
		{
			if(front==-1||front>rear)
			{
				cout<<"queue under flow..."<<endl;
			}
		else 
		{
			int u,c;
			cout<<" element you want to delete:"<<endl;
		    cin>>u;
		    c:
		    if(front==u-1)
		    {
		    	cout<<"elements deleted are:"<<endl;
			cout<<Queue[front]<<endl;
			front++;
	        }
	        else
	        {
	        	front++;
	        	goto c;
			}
		}
		}
		
		void display()
		{
			if(front==-1)
			{
				cout<<"queue is empty"<<endl;
			}
			else
			{
				cout<<"queue elemnts are......"<<endl;
				for(int i=front;i<=rear;i++)
				{
					cout<<Queue[i]<<"\t";
				}
			}
		}
};
int main(int argc, char** argv) {
	Que obj;
	obj.Enqueue();
	obj.Dequeue();
	obj.display();
	return 0;
}
