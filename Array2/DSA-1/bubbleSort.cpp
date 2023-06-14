#include<iostream>
using namespace std;
int main(){
    int arr[10],size;
    cout<<"Enter the size:";
    cin>>size;
    cout<<"Enter the elements..."<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0; i<size; i++){
        cout<<arr[i]<<"   ";
    }

}