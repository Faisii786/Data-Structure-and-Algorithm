#include<iostream>
using namespace std;

int main()
{
	int arr[100];
	int n;
	cout<<"Wellcome 'INSERTION SORT'"<<endl;
	cout<<"Enter the Array Size"<<endl;
	cin>>n;
	cout<<"Enter the elements of the array\n";
	for(int i=0;i<n;i++)
	{	
		cin>>arr[i];
	}
	cout<<endl;
	
	
	for(int i=0;i<n;i++)
	{
		int current=arr[i];
		int j=i-1;
		while(arr[j]>current && j>=0)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=current;
	}
	
	cout<<"The Sorted array is\n";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"\t";
	}
	return 0;
}
