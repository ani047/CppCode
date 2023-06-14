#include<iostream>
using namespace std;
int main(){
    int arr1[3][3],arr2[3][3],arr3[3][3];

    cout<<"Enter for arr1 or Matrix 1st:"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr1[i][j];
        }
    }

    cout<<"Enter for the arr2 or Matrix 2nd:"<<endl;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr2[i][j];
        }
    }

    cout<<"Matrix 1st:"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr1[i][j]<<"  ";
        }
        cout<<endl;
    }

    cout<<"Matrix 2nd:"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr2[i][j]<<"  ";
        }
        cout<<endl;
    }


    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
    }

    cout<<"Addition of Matrix"<<endl;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr3[i][j]<<"  ";
        }
        cout<<endl;
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr3[j][i]<<"  ";
            }
            cout<<endl;
        }
}


    