#include<iostream>
using namespace std;

class Binary_Search
{
	private:
		int choice;
		int arr[10];
		public:
			void set()
			{
				cout<<"Assalam o Alaikum\n";
				cout<<"Enter choice how many number you want to Enter:"<<endl;
				cin>>choice;
				cout<<"Enter array elements:"<<endl;
				for(int i=0;i<choice;i++)
				{
					cin>>arr[i];
				}
			}
			void binarysearch()
			{
				int search;
				int mid=10;
				mid=mid/2;
				for(int i=0;i<mid;i++)
				{
					cout<<"the value index is:"<<i<<"\t"<<arr[i];
				}
				for(int i=0;i<10;i++)
				{
					cout<<"the value is:"<<i<<"\t"<<arr[i];
				}
				cout<<"enter the number that you want to search:";
				cin>>search;			
				
				int flag=0;
				if(arr[mid]==search)
				{
					flag=1;
				}
				else if(arr[mid]<search)
				{
					mid=mid-1;
				}
				else
				{
					mid=mid+1
				}				
							
};
int main(int argc, char** argv) 
{
	Binary_Search A;
	A.set();
	A.binarysearch();
	return 0;
}
