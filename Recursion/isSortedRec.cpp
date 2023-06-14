#include<iostream>
using namespace std;
bool isSorted(int *arr,int size){
    //base case...
    if(size == 0 || size ==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }

    //recursive relation
    isSorted(arr+1,size-1);
}
int main(){
    int arr[10],size;
    cout<<"Size:";
    cin>>size;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    bool num = isSorted(arr,size);

    if(num){
        cout<<"Array is Sorted...";
    }
    else{
        cout<<"Array is not Sorted...";
    }
}