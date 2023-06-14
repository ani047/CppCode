#include<iostream>
using namespace std;
int main(){
    int arr[6][6];
    int i,j;
    for(i=0; i<6; i++){
        for ( j = 0; j < i; j++){
            arr[i][j]=0;
            if(i==j){
                arr[i][j]=1;
            }
            if(j==0){
                arr[i][j]=1;
            }
            
        }
        
    }
    for(i=0; i<6; i++){
        for(j=0; j<6; j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}