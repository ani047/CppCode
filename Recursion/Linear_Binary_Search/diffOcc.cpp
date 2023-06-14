#include <map>
#include <unordered_map>
#include<iostream>
using namespace std;
int main(){
    int arr[10],num;
    cout<<"Num:";

    //input...
    cin>>num;

    //input for elements...
    for(int i=0; i<num; i++){
        cin>>arr[i];
    }

    //create a map to define the occurence of the array.../
    unordered_map<int,int> umap;

    for(auto x: arr){
        umap.insert(make_pair(arr[x],x));
    }
    for(auto i: umap){
        cout<<umap.at(0)<<" ";
    }

    // for(auto i: umap){
    //     if(umap.second[i]==umap.second[i+1]){
    //         cout<<"False"<<end;
    //     }
    //     else{
    //         cout<<"True";
    //     }
    // }
    
}