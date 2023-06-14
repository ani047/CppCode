#include<iostream>
using namespace std;

int main(){
    int nums[10];
    int size,count=0;
    cout<<"Enter the size ->";
    cin>>size;
    int start=0, end=0; 

    cout<<"Enter the elements..."<<endl;

    for(int i=0; i<size; i++){
        cin>>nums[i];  
    }

    while(end<size){
        if(nums[end]){
            swap(nums[start++],nums[end++]);
            count++;
        }
        else{
            end++;
        }

    }


    for(int i=0; i<count; i++){
        cout<<nums[i]<<"  ";
    }


}
