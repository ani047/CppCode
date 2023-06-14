#include<iostream>
using namespace std;
bool linearSearch(int arr[],int size,int key){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<"  ";
    }cout<<"  "<<size<<endl;

    //base case...
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }

    //recursive relation...
    return linearSearch(arr+1,size-1,key);



}
int main(){
    int arr[10];
    int size,target;
    cout<<"Enter the size:";
    cin>>size;

    cout<<"Enter the elements:"<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    cout<<"Enter your Target Number:";
    cin>>target;

    bool ans = linearSearch(arr,size,target);
    if(ans){
        cout<<"Element is present...";
    }
    else{
        cout<<"Element is not present...";
    }
}