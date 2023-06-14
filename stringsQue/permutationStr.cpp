#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int n;
    int a;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a;
        v.push_back(a); 
    }
   for(auto &p : v)
   {
      cout<<p<<" ";
   }
}