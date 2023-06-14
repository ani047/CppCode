#include<iostream>
using namespace std;
int main(){
    int arr[10],size;
    cout<<"Size:";
    cin>>size;

    
    //taking input from user...
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    //check the how many number which is power of 2...

   


    //its for printing the value...
    cout<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<"  ";
    }
}