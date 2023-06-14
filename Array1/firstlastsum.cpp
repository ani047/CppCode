#include<iostream>
using namespace std;
int main(){
    int arr[10],size,sum=0;
    cout<<"Enter the size of Array:";
    cin>>size;

    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    sum=arr[0]+arr[size-1];
    cout<<"Sum of First and Last Elments:"<<sum<<endl;
}