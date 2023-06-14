#include<iostream>
using namespace std;
int main(){
    int arr[10],size;
    int min = INT32_MAX;
    int max = INT32_MIN;
    int maxIndex=0,minIndex=0;
    cout<<"Enter the size of Array:";
    cin>>size;
    
    cout<<"Enter the elements...";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    for(int i=0; i<size; i++){
        if(arr[i]>max){
            max = arr[i];
            maxIndex=i;
        }
        if(arr[i]<min){
            min = arr[i];
            minIndex=i;
        }
    }
    cout<<"sum of minmaxIndex:"<<minIndex+maxIndex;
}