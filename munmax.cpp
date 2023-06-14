#include<iostream>
using namespace std;
int getMin(int a[],int n){
    int min=INT32_MAX;
    for(int i=0; i<n; i++){
        if(a[i]<min)
        min=a[i];
    }
    return min;

}

int getMax(int ar[],int n){
    int max=INT32_MIN;
    for(int i=0; i<n; i++){
        if(ar[i]>max)
        max=ar[i];
    }
    return max;
}
int main(){
    int arr[10],size,num;
    cout<<"Enter the size of Array->";
    cin>>size;
    cout<<"Enter the Arrays elements->"<<endl;
    for(int i=0; i<size; i++){
        
        cin>>arr[i];
    }
    cout<<"Max is: "<<getMax(arr,size)<<endl;
    cout<<"Min is: "<<getMin(arr,size);
}
