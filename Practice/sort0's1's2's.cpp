#include<iostream>
#include<vector>
using namespace std;
int main(){
    int nums[20],test[20];
    int len,temp=0;
    cout<<"Length:";
    cin>>len;
    for(int i=0; i<len; i++){
        cin>>nums[i];
    }
    int n=0;
    while(temp<3){
        for(int j=0; j<len; j++){
            if(nums[j]==temp){
                test[n]=nums[j];
                n++;
            }
        }
        temp++;
    }

    for(int k=0; k<len; k++){
        cout<<test[k];
    }
}