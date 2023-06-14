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
int alternateSwap(int a[],int num){
    for(int i=0; i<num-1; i+=2){
        if(a[i]>0){
        swap(a[i],a[i+1]);
        }
    }
}
int main(){
    int arr[20],size;
    cout<<"Enter the size of Array->";
    cin>>size;
    getInput(arr,size);
    alternateSwap(arr,size);
    getPrint(arr,size);
    

}