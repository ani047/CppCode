#include<iostream>
using namespace std;
int main(){
    int arr[10],size,minIndex;
    cout<<"Enter the size: ";
    cin>>size;
    cout<<"Enter the elements..."<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    for(int i=0; i<size-1; i++){
        minIndex=i;
        for(int j=i+1; j<size; j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }

    for(int i=0; i<size;i++){
        cout<<arr[i]<<"  ";
    }
}