#include<iostream>
using namespace std;
int main(){
    int arr[3][3],sum=0;
    int row =  sizeof( arr ) / sizeof( arr[0] );
    cout<<row<<endl;
    cout<<"Enter the elements..."<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }

    
    

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(i==j){
               sum=arr[i][j]+sum;
            }
            if((i+j)==2){
                sum=arr[i][j]+sum;
            }
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<"   ";
        }
        cout<<endl;
    }
    cout<<endl<<"The sum is: "<<sum;
}