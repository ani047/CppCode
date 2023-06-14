#include<iostream>
using namespace std;
int main(){
    int arr[10],size,firstIndex,secondIndex;
    cout<<"Enter the size of Array->";
    cin>>size;

    cout<<endl<<"Enter the elements..."<<endl;

    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    for(int i=0; i<size; i++){
        for(int j=1; j<=size; j++)
        {
            if(arr[i]==arr[j]){
                firstIndex=i;
                secondIndex=j;
            }
        }
    }
    cout<<firstIndex<<"  "<<secondIndex<<endl;

    

}