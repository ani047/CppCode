//priority queue [STL]...
#include<iostream>
#include<queue>
using namespace std;
int main(){
    //max heap...
    priority_queue<int>maxi;
    priority_queue<int>m;

    //mini heap...
    priority_queue<int,vector<int>,greater<int>>mini;

    maxi.push(1);
    maxi.push(2);
    maxi.push(3);
    maxi.push(4);
    maxi.push(5);


    
    m.push(1);
    m.push(2);
    m.push(3);
    m.push(4);
    m.push(5);


    int max=maxi.size();
    int mi=m.size();

    for(int i=0; i<max; i++){
        cout<<maxi.top()<<"  ";
        maxi.pop();
        
    }cout<<endl;

    for(int i=0; i<mi; i++){
        cout<<m.top()<<"   ";
        m.pop();
    }cout<<endl;

    mini.push(34);
    mini.push(43);
    mini.push(94);
    mini.push(23);
    mini.push(65);
    int min=mini.size();
    cout<<"Its part of mini pq..."<<endl;
    for(int i=0; i<min; i++){
        cout<<mini.top()<<"  ";
        mini.pop();
    }cout<<endl;

    //  for(int i=0; i<min; i++){
    //     cout<<mini.top()<<"  ";
    //     mini.pop();
    //  }
    

    cout<<endl<<mini.empty()<<endl;

}