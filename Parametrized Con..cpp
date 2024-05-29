#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class abc
{
	private:
		int i,j;
	public:
		abc(int a,int b)
		{
			i=a;
			j=b;	
		}
		void display()
		{
			cout<<"the values are\n";
			cout<<i<<j;
		}	
};
int main() 
{
	abc obj(5,6);
	obj.display();
	return 0;
}
