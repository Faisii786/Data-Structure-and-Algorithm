#include <iostream>
#include<conio.h>
using namespace std;
class stack
{
	int stk[4];
	
	int v;
	int top;
	public:
		stack()
		{
			top=-1;
		}
		void push()
		{
			for(int i=0;i<=2;i++)
			{
				cout<<"enter values in stack "<<endl;
				cin>>v;
				stk[top]=v;
			}
			
			
		}
	
		 void pop()
		 {
		 int mul;
		 mul=v*v;
		 stk[top]=mul;
		 --top;	
		 }
		 void display()
		{
			for(int j=0;)
		}
		 
		 
};
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	stack obj;
	obj.push();
	obj.pop();
	return 0;
}
