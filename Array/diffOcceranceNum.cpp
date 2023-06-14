#include<iostream>
using namespace std;
int main(){
    int arr[10],size,count=1;

    cout<<"Enter the size of Array:";
    cin>>size;

    cout<<"Enter the elements..."<<endl;

    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    for(int i=0; i<size; i++){
    if(arr[i]==arr[i+1]){
        count++;
        if(count==arr[i]){
            cout<<"False"<<endl;
        }
    }else{
        cout<<"Truth"<<endl;
    }
}
// cout<<"Unique num is:"<<ans;
}