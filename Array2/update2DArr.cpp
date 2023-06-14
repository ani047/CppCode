#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    cout<<"Enter the Elements..."<<endl;
     for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
     }
     for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(i==j){
               arr[i][j]=10;
                
            }
        }
     }

     for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j];
        }
        cout<<endl;
     }
     
}