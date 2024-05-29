#include <iostream>
using namespace std;
#include <conio.h>

class selsort{
    int arr[100],n;
    public:
    void getdata();
    void showdata();
    void sortLogic();
};

void selsort :: getdata(){
    cout<<"Enter the size of elements : ";
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
}

void selsort :: showdata(){
    cout<<"Display\n";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"   ";
}


void selsort :: sortLogic(){
    int temp,min;
    for(int i=0;i<n;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(arr[min] > arr[j]){
                min=j;
            }
        }
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

int main(){
    selsort obj;
    obj.getdata();
    obj.sortLogic();
    obj.showdata();
    getch();
}

