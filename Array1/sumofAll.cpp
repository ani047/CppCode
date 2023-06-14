#include<iostream>
using namespace std;
int main(){
    int arr[10],size,sum=0;
    int max=INT32_MIN,min=INT32_MAX;

    float avgMarks;
    cout<<"Enter the size of Array:";
    cin>>size;
    if(size>0){
    for(int i=0; i<size; i++){
        cin>>arr[i];

    }
    for(int i=0; i<size; i++){
        if(arr[i]>=0)
            sum=arr[i]+sum;
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
            
    }
    for(int i=0; i<size; i++){
        if(arr[i]>=0)
            cout<<arr[i]<<"  ";
    }
    cout<<endl<<"The sum of Array will be:"<<sum<<endl;
    avgMarks=sum/size;
    cout<<"Avg is:"<<avgMarks;
    cout<<"Max is"<<max;
    cout<<"Min is"<<min;

    }
    else{
        cout<<"Entered size is not Valid!";
    }
}
