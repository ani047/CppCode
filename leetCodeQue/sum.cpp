#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr1;
    vector<int>arr2;
    vector<int>arr3;
    int n,m,num1=0,num2=0,num3,temp;
    int s1=n-1;
    int s2=m-1,s3;

    if(m>n){
        if(m>n){
        s3=s2;
    }
    else{
        s3=s1;
    }
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

    for(int i=0; i<n; i++){
        temp=arr1[i];
        num1=num1*10+temp;

    }
    // int number1=num;

    for(int i=0; i<m; i++){
        temp=arr2[i];
        num2=num2*10+temp;

    }
    // int number2=num;

    // cout<<num1<<endl;
    // cout<<num2<<endl;
    num3=num1+num2;

    
    for(int i=0; i<s3; i++){
        int rem=0;
        rem=num3%10;
        arr3[i]=rem;
        num3=num3/10;
        
    }

    for(int i=0; i<s3; i++){
        cout<<arr3[i]<<"  ";
    }



    

}