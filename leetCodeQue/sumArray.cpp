#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr1;
    vector<int> arr2;
    vector<int> arr3;
    int n,m;
    int num1,num2,num3;
    cout<<"Value of n->";
    cin>>n;
    cout<<"Value of m->";
    cin>>m;

    for(int i=0; i<n; i++){
        cin>>i;
        arr1.push_back(i);
    }

    for(int i=0; i<m; i++){
        int k;
        cin>>k;
        arr2.push_back(k);
    }

    for(int i=0; i<n-1; i++){
        num1=arr1[i]*10+arr1[i+1];
    }

     for(int i=0; i<m-1; i++){
        num2=arr2[i]*10+arr2[i+1];
    }

num3=num1+num2;

    if(n>m){
        for(int i=0; i<m-1; i++){
            int rem=num3%10;
            arr3[i]=rem;
            num3=num3/10;
    }
    
    }
    else{
        for(int i=0; i<n-1; i++){
            int rem=num3%10;
            arr3[i]=rem;
            num3=num3/10;
    }

    }
    cout<<num3<<endl;

  for(int i=0; i<m; i++){
    cout<<arr3[i]<<"  ";
  }




}