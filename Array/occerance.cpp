#include<iostream>
using namespace std;
int main(){
    int arr[10],size,key,occ=0;
    
    cout<<"Enter the size of Array:";
    cin>>size;

    cout<<"Enter the elements..."<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    cout<<endl<<"Enter the key:";
    cin>>key;


    for(int i=0; i<size; i++){
        if(arr[i]==key){
            occ++;

        }
    }
    cout<<"Hey!"<<key<<" is occouranced "<<occ<<" times";
}