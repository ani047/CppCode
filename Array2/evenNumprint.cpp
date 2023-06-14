#include<iostream>
using namespace std;
int main(){
    int arr[10],size,count=0;
    
    cout<<"Enter the size of Array:";
    cin>>size;

    cout<<"Enter the elements..."<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    for(int i=0; i<size; i++){
        if(arr[i]%2==0){
            cout<<"Hello"<<"  ";
        }
    }
}