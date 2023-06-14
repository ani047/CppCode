#include<iostream>
using namespace std;
int main(){
    int arr[10],n;
    cout<<"n:";
    cin>>n;

    cout<<"Elements:"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int i=0,count=1;
    int j=1;

    while(j!=n){
        if(arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j];
             count++;
        }
        else{
            j++;
        }
    }

    cout<<"numbers:"<<count<<endl;

    for(int i=count; i<n; i++){
        arr[i]=0;
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<"  ";
    }
}