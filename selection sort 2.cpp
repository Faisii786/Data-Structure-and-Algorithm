#include <iostream>
using namespace std;

class selSort
{
	private:
		int arr[5];
		int n;
	public:
	void get();
	void show();
	void sortlogic();	
};
	void selSort::get()
	{
		cout<<"Enter array elements:"<<endl;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
	}
	
	void selSort::show()
	{
		cout<<"Required array elements are:"<<endl;
		for(int i=0;i<n;i++)
		{
			cout<<arr[i]<<"\t";
		}
	}
	
	void selSort::sortlogic()
	{
		int temp,i;
		temp=arr[i];
		for(int i=0;i<n;i++)
		{
			for(int 
			j=i+1;j<n;j++)
			{
				if(temp>arr[i+1])
				{
					arr[i]=temp;
					cout<<temp<<"greater than"<<"\t"<<arr[i+1];
				}
			}
		}
	}
int main() 
{
	selSort obj;
	obj.get();
	obj.show();
	obj.sortlogic();
	return 0;
}
