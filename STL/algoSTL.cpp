#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(9);
    v.push_back(45);
    v.push_back(11);

    cout<<binary_search(v.begin(),v.end(),11)<<endl;

    cout<<"lower bound- "<<lower_bound(v.begin(),v.end(),9)-v.begin()<<endl;

    cout<<"upper bound- "<<upper_bound(v.begin(),v.end(),9)-v.begin()<<endl;

    int a=3;
    int b=5;
    cout<<"Before swpping..."<<endl;
    cout<<a<<"  "<<b<<endl;
    swap(a,b);
    cout<<"After Swapping"<<endl;
    cout<<a<<"  "<<b<<endl;

    cout<<"Max-  "<<max(a,b)<<endl;
    cout<<"Min-  "<<min(a,b)<<endl;

    string str="Anil";
    cout<<str<<endl;
    reverse(str.begin(),str.end());
    cout<<str<<endl;


    //Routed...

     for(int i:v){
        cout<<i<<"   ";
    }    cout<<endl;

    rotate(v.begin(),v.begin()+3,v.end());
    cout<<"After..."<<endl;
    for(int i:v){
        cout<<i<<"   ";
    }    cout<<endl;
    cout<<"Sorted..."<<endl;
    sort(v.begin(),v.end());
     for(int i:v){
        cout<<i<<"   ";
    }    cout<<endl;

}