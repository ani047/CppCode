#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr1;
    vector<int>arr2;
    vector<int>arr3;
    int n,m;
    
    int s1=n-1;
    int s2=m-1;
    int s3;
    if(m>n){
        s3=s2;
    }
    else{
        s3=s1;
    }
    

    cout<<"Enter the size of arr1->";
    cin>>n;

    cout<<"Enter the size of arr2->";
    cin>>m;
    

    cout<<"Enter elements..."<<endl;
    for(int i=0;i<n; i++){
        int a;
        cin>>a;
        arr1.push_back(a);
    }

    cout<<"Enter elements..."<<endl;
    for(int i=0;i<m; i++){
        int b;
        cin>>b;
        arr2.push_back(b);
    }

    int num;
    while(s1>0 && s2>0){
        
        if(num>=10){
            int rem;
            rem=num%10;
            num=num/10;
            arr3[s3--]=rem;
            arr1[s1]+=num;
        }
        else{
            num=arr1[s1--]+arr2[s2--];
        }

    }

    for(int i=0; i<s3; i++){
        cout<<arr3[i]<<" ";
    }


    
    
}