#include<iostream>
using namespace std;
int main(){
    int arr[10][10];
    int row,col;
    cin>>row;
    cin>>col;

    
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }

    //Row wish sum;
    cout<<"Row Wise Sum:";

    for(int i=0; i<row; i++){
        int sum=0;
        for(int j=0; j<col; j++){
            sum=sum+arr[i][j];
        }
        cout<<sum<<endl;
    }


    //sum column_wiae...

    for(int i=0; i<row; i++){
        int sum=0;
        for(int j=0; j<col; j++){
            sum=sum+arr[j][i];
        }
        cout<<sum<<endl;
    }
}