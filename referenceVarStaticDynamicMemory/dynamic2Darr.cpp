#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"num:";
    cin>>num;
    int** arr = new int*[num];
    //creating 2d array using dynamic memory allocation...
    for(int i=0; i<num; i++){
        arr[i]=new int[num];
    }

    //Taking the input from user...

    for(int i=0; i<num; i++){
        for(int j=0; j<num; j++){
            cin>>arr[i][j];
        } 
    }

    //print the value...

    for(int i=0; i<num; i++){
        for(int j=0; j<num; j++){
            cout<<arr[i][j]<<"  ";
        } 
        cout<<endl;
    }
    //deletion the memory 

    for(int k=0; k<num; k++){
        delete []arr[k];
    }

    //delete the pointer which is hold the pointer of pointer...

    delete [] arr;
}