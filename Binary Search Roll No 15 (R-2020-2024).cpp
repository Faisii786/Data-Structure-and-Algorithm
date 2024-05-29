// Binary Search Implemetation
#include<iostream>
#include<conio.h>
using namespace std;
int main(int argc, char**argv)

{
	cout<<"\t\t\t\t\t\tAssalam O Alaikum \n";
	cout<<"\t\t\t\t\t\tFaisal Aslam\n";
	cout<<"\t\t\t\t\t\tRoll No 15 (Repeater)\n";
	cout<<"\t\t\t\t\t\tSession 2020-2024\n\n";
	int n ,i, arr[50],search,end,start,mid, loc, flag=0;
    cout<<"Enter total number of elements :";
	cin>>n;
	cout<<"Enter " << n << " numbers:\n";
	for(i=0 ; i<n ;i++)
	{
	cin>>arr[i];
    }
    cout<<"Enter a number to find:";
    cin>>search;
    start=0;
    end=n-1;
    while (start<=end)
    
    {
    	mid=(start+end)/2;
    	if (search==arr[mid])
    	
    	{
    		flag= 1;
    		loc= mid;
    		cout<<search<<" found at location " <<loc +1<< "\n";
    		break;
		}
    	
    	else
    	if(search<arr[mid])
    	{
    	end=mid-1;
    	
        }
        else
        if(search>arr[mid])
        {
        	start=mid + 1;
        	
		}
	}
		if(flag==0)
		{
			cout<<"Not found !"<<search<<"in the list";
			
		}
	        return 0;
}
