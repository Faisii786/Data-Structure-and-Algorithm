#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class Binary_Search
{
	private:
		int arr[5];
		public:
			void set()
			{
				cout<<"Enter array elements:"<<endl;
				for(int i=0;i<5;i++)
				{
					cin>>arr[i];
				}
			}
			void get()
			{
				int i,mid;
				cout<<"Required array elements are:"<<endl;
				for(int i=0;i<5;i++)
				{
					if(arr[i]<mid)
					cout<<arr[i]<<"\t";
				}
			}
};
int main() 
{
	Binary_Search A;
	A.set();
	A.get();
	return 0;
}
