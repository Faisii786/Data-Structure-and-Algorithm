#include <iostream>
#include<conio.h>
using namespace std;
class queue
{
	int queu1[100];
	int queu2[100];
	int queu3[100];
	int n=100;
	int front=-1;
	int rear=-1;
	int val;
	int val2;
	int val3;
	public:
		void enque()
		{
			if(rear==-1)
			{
				cout<<"queue is overflow"<<endl;
				
			}
			else
			{
				if(front==-1)
				front=0;
				cout<<"enter elements in queu1 "<<endl;
				cin>>val;
				queu1[rear]=val;
				cout<<"enter elements in queu2"<<endl;
				cin>>val2;
				queu2[rear]=val2;
				val3=val*val2;
			queu3[rear]=val;
				rear++;
				
			}
		}
		void display()
		{
			if(front==-1)
			{
			cout<<"stack is empty"<<endl;
				
			}
			else
			{
			for(int i=front; i<=rear;i++)
			cout<<"displaying elements of queu"<<endl;
			cout<<queu3[i];
			
			}
			
		}
};
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	queue obj;
	obj.enque();
	obj.display();
	return 0;
}
