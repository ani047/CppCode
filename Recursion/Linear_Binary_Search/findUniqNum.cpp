#include<iostream>
using namespace std;
int findUnique(int arr[],int num, int ans){
    
    //base case
    if(num==0){
        return ans;
    }

    //processing...
    ans = ans ^ arr[0];

    //recursive relation
    findUnique(arr+1,num-1,ans);
  
}
int main(){
    int arr[10],num,ans=0;
    //input of size
    cout<<"Num:";
    cin>>num;

    //input elements...
    for(int i=0; i<num; i++){
        cin>>arr[i];
    }

    int result = findUnique(arr,num,ans);
    cout<<"Unique one is:"<<result;
}