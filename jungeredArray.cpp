#include<iostream>
using namespace std;
int main(){
    int arr[10][10],col;
    int max=0;
    //taking the value from user...
    for(int i=0; i<5; i++){
        cout<<endl<<"col:";
        cin>>col;
        if(max<col){
            max=col;
        }

        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }
    
  

    //print the value...

    for(int i=0; i<5; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
}