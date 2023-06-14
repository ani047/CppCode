#include<iostream>
using namespace std;
void getInput(int a[],int size){
   for(int i=0; i<size; i++){
    cin>>a[i];
    } 
}

int getPrint(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"  ";
    }
}

int reverseArray(int arr[],int size){
    int start=0,end=size-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[20],size;
    cout<<"Enter tge size of Array->";
    cin>>size;
    getInput(arr,size);
    reverseArray(arr,size);
    getPrint(arr,size);
    

}