#include<iostream>
using namespace std;
int main(){
    int arr1[3][3],arr2[3][3],mul[3][3],sum;

    cout<<"Enter the arr1 elements:"<<endl;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr1[i][j];
        }
    }

    cout<<"Enter the arr2 elements:"<<endl;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr2[i][j];
        }
    }

    cout<<"1st Matrix:"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr1[i][j]<<"  ";
        }
        cout<<endl;
    }

    cout<<"2st Matrix:"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr2[i][j]<<"  ";
        }
        cout<<endl;
    }

    cout<<"Multiplication of Matrix:"<<endl;

    for(int i=0; i<3; i++){
       for(int j=0; j<3; j++){
        mul[i][j]=0;
        for(int k=0; k<3; k++){
            mul[i][j]=arr1[i][k]*arr2[k][j]+mul[i][j];
        }            
        }
    }

    cout<<"Multiplication of Matrix:"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<mul[i][j]<<"  ";
        }
        cout<<endl;
    }    
}