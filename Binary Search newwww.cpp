#include<iostream>
using namespace std;

class Binary_Search
{
		private:
			int choice;
			int arr[10];
			int mid=0;
			
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
				mid=choice/2;
			}
			void display()
			{
				for(int i=0;i<mid;i++)
				{
					cout<<arr[i]<<" ";
				}
				for(int i=mid;i<choice;i++)
				{
					cout<<arr[i]<<" ";
				}	
			}
			void binarysearch()
			{
				int search;
				cout<<"enter the number that you want to search:";
				cin>>search;			
				if(mid==search)
				{
					cout<<"Number found at mid"<<endl;
				}
				else if(search<mid)
				{
					for(int i=0;i<mid;i++)
					{
						if(search==arr[i])
						{
							cout<<"value is at "<<i<<endl;
						}
					}
				}
				else if(search>mid)
				{
						for(int i=mid;i<choice;i++)
					{
						if(search==arr[i])
						{
							cout<<"value is at "<<i<<endl;
						}
					}
				}
				else
				{
					cout<<"Nuber dosenot exist"<<endl;
				}				
		}
};
int main(int argc, char** argv) 
{
	Binary_Search A;
	A.set();
	A.display();
	A.binarysearch();
	return 0;
}
