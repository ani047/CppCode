#include<iostream>
#include<queue>
using namespace std;
int main(){
    deque<int>d;
    d.push_back(1);
    d.push_back(5);
    d.push_back(7);
    d.push_front(3);


    for(int i:d){
        cout<<i<<"  ";

    }cout<<endl;

    d.pop_back();

     for(int i:d){
        cout<<i<<"  ";

    }cout<<endl;


    cout<<d.front()<<endl;
    cout<<d.back()<<endl;


    cout<<d.empty()<<endl;

    cout<<"before erase"<<d.size()<<endl;

    d.erase(d.begin(),d.begin()+2);

    cout<<"After erase"<<d.size()<<endl;


//size will be erase but the capacity will be same;


}