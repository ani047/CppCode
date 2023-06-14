#include<iostream>
using namespace std;
int linear_search(int a[],int n, int target){
    int pos=0;
    for(int i=0; i<n; i++){
        if(a[i]==target){
            pos=i+1;
            break;
        }
    }
    return pos;
}
int main(){
    int arr[20],size,target;
    cout<<"Enter the size of Array->";
    cin>>size;

    cout<<"Enter the elements of array->";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"Enter the target element from the array";
    cin>>target;
    int pos=linear_search(arr,size,target);
    cout<<"Index is :"<<pos;
}
