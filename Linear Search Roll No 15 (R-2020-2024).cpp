// Linear Search Implemetation
#include<bits/stdc++.h>
using namespace std;
int main()
{
	cout<<"\t\t\t\t\t\tAssalam O Alaikum \n";
	cout<<"\t\t\t\t\t\tFaisal Aslam\n";
	cout<<"\t\t\t\t\t\tRoll No 15 (Repeater)\n";
	cout<<"\t\t\t\t\t\tSession 2020-2024\n\n";
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
