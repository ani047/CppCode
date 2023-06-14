#include<iostream>
using namespace std;
int main(){
    int row,col;
    int arr[10][10];
    cout<<"Enter the size of row:";
    cin>>row;

    cout<<"Enter the size of col";
    cin>>col;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }


    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[j][i]<<" ";

        }
        cout<<endl;
    }

}