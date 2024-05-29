#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class abc
{
	private:
		int i,j;
	public:
		void get_value()
		{
			cout<<"enter the two values\n";
			cin>>i>>j;	
		}
		void display()
		{
			cout<<"the values are\n";
			cout<<i<<j;
		}	
};
int main() 
{
	abc obj;
	obj.get_value();
	obj.display();
	return 0;
}
