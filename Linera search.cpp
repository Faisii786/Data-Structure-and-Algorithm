#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[40],i,size,num,flage,pos;
	cout<<"Enter size of the array : "; 
	cin>>size;
	cout<<"Enter array element : \n";
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the no that u want to find:";
	cin>>num;
	for(i=0;i<size;i++)
	{
		if(arr[i]==num)
		{
			flage=1;
			pos=i+1;
			break;
		}
	}
	if(flage==0)
	{	
	cout<<"Number not found <<";  
	}
	else
	{ 
	cout<<"number found at possition : "<<pos;
	}
	return 0;
}
