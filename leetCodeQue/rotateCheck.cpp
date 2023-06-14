#include<iostream>
#include<vector>
using namespace std;
int roatateCheck(int arr[]){

}
bool sortCheck(int arr[]){

}
int main(){
    int arr[10],size;
    cout<<"size->";
    cin>>size;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

   
    if(sortCheck(arr)){
        return true;
    }
    else{
        roatateCheck(arr);
        sortCheck(arr);
    }
}