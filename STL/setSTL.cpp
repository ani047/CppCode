#include<iostream>
#include<set>
using namespace std;
int main(){
    //time is taking O(n)...
    //element will be uniue in the set...
    set<int>s;
    s.insert(4);
    s.insert(89);
    s.insert(2);
    s.insert(2);
    s.insert(12);
    s.insert(34);
    s.insert(54);

    for(auto i:s){
        cout<<i<<"  ";
    }cout<<endl;


    // now the timing is finding the elements...

    s.erase(s.begin());
    for(auto i:s){
        cout<<i<<"  ";
    }cout<<endl;

    set<int> ::iterator  it = s.begin();
    s.erase(it);
    cout<<"ok  "<<s.count(4)<<endl;

    set<int>::iterator itr = s.find(2);
    for(auto iti=itr; iti!=s.end(); iti++){
        //cout<<iti<<"  ";
    }

}