
#include<iostream>
using namespace std;
int main(){
    int arr[3][3],max=INT32_MIN;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Matrix..."<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(arr[i][j]>max){
                max = arr[i][j];
            }
            
        }
        cout<<"max of 1st Row:"<<max<<endl;
            max=INT32_MIN;
    }
}