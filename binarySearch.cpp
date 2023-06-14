#include<iostream>
using namespace std;
int binarySearch(int arr[], int start,int last, int target){
    if(target==arr[start])
    return start+1;
    else if (target==arr[last])
        return last+1;
    // else if(target<=arr[start] || target>=arr[last])
    // return -1;
    int mid=(start+last)/2;
     if(target==arr[mid])
     return mid+1;
     else if(target>arr[mid]){
        return binarySearch(arr,mid,last,target);
     }
     else if(target<arr[mid]){
        return binarySearch(arr,start,mid,target);
     }
}
int main(){
    int arr[20],size,target,start_index,last_index;
    cout<<"Enter the size of Array->";
    cin>>size;
    
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the Target->";
    cin>>target;
    //short(arr);
    start_index=0;
    last_index=size;
    cout<<binarySearch(arr,start_index,last_index,target);
    
}