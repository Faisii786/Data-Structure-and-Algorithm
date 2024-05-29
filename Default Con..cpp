#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class abc
{
	private:
		int i,j;
	public:
		abc()
		{
			i=5;
			j=6;	
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
	obj.display();
	return 0;
}
