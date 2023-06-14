#include<iostream>
using namespace std;
int main(){
    int arr[3][3],sum=0;
    cout<<"Enter the Matrix Elements:"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Matrix will be..."<<endl;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<"Diagonal of Matrix..."<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(i==j){
                cout<<arr[i][j];
                sum=arr[i][j]+sum;
            }
            else{
                cout<<" _ ";
            }
        }
        cout<<endl;
    }
    cout<<"Sum of Diagonal is:"<<sum<<endl;
    cout<<"avg od diagonal:"<<sum/3<<endl;
}