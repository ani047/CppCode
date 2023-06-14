#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(8);
    v.push_back(9);
    v.push_back(71);
    v.push_back(12);
    cout<<"size of vector->"<<v.size()<<endl;
    cout<<"Capacity of vector->"<<v.capacity()<<endl;
    cout<<"element is ->"<<v.at(3)<<endl;
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;

    cout<<"Before pop"<<endl;

    for(int i:v){
        cout<<i<<"  ";
    }

    cout<<endl;

    v.pop_back();
    

    cout<<"After pop"<<endl;
    for(int i:v){
        cout<<i<<"  ";
    }
    cout<<endl;


    v.clear();

    cout<<"Capacity->"<<v.capacity()<<endl;
    cout<<"empty->"<<v.empty()<<endl;


    //copy a vector to another one;

    vector<int> a(4,1);
    vector<int> last(a);

    for(int i:last){
        cout<<i<<"  ";
    }
    cout<<endl;

}