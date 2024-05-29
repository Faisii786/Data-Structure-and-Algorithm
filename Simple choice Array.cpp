#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class arrdemo
{
	private:
		int c;
		int arr[];
		public:
			void set()
			{
				cout<<"Enter choice how many nuber you want to enter"<<endl;
				cin>>c;
				cout<<"Enter array elements:"<<endl;
				for(int i=0;i<c;i++)
				{
					cin>>arr[i];
				}
			}
			void display()
			{
				cout<<"Required array elements are:"<<endl;
				for(int i=0;i<c;i++)
				{
					cout<<arr[i]<<"\t";
				}
			}
};
int main(int argc, char** argv) {
	arrdemo A;
	A.set();
	A.display();
	return 0;
}
