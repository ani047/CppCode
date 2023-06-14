#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>l;

    l.push_back(4);
    l.push_front(2);
    l.push_back(6);
    l.push_front(3);
    l.push_back(1);

    for(int i:l){
        cout<<i<<"  ";
    }
    cout<<endl;

    cout<<l.size();
    cout<<endl;
    //printing the value O(n);
    l.pop_back();
    l.pop_front();


    for(int i:l){
        cout<<i<<"  ";
    }
    cout<<endl;


    list<int>newone(l);
    list<int>New(newone);

    cout<<"copyed list..."<<endl;
    for(int i:New){
        cout<<i<<"  ";
    }
    cout<<endl;
    
}