
#include<iostream>
using namespace std;
int main(){
    int arr[3][3],sum=0;
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
           sum=arr[i][j]+sum;
            
        }
        cout<<"sum of"<<i<<"st Row:"<<sum<<endl;
        cout<<"avg of "<<i<<"<<st Row:"<<sum/3<<endl;
            sum=0;
    }
}