#include<iostream>
using namespace std;
int main(){
    int arr[3][3],max=INT32_MIN;
    cout<<"Enter the elements..."<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }
    }

    cout<<endl<<"Largest elements of Matrix is:"<<max<<endl;
}