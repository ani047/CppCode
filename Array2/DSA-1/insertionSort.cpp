#include<iostream>
using namespace std;
int main(){
    int arr[10],size;
     cout<<"Enter the size:";
    cin>>size;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    cout<<endl<<"Unsorted..."<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<"  ";
    }
    for(int i=1; i<size; i++){
        int temp = arr[i];
        int j = i-1;
        for(; j>=0; j--){
            if(arr[j]>temp){
                //shifting...
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }

    cout<<endl<<"Sorted one..."<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<"  ";
    }
}
