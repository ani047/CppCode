#include<iostream>
#include<map>
using namespace std;
int main(){
    //Ordered map and its implemented by Red Black Tree...
    //or balanced tree...
    //O(n);
    //O(log n);
    map<int,string>m;
    m[1]="Patel";
    m[3]="Holkar";
    m[2]="Sharma";
    m[4]="Meran";

    m.insert({5,"Malakar"});

    for(auto i:m){
        cout<<i.first<<"    "<<i.second<<endl;
    }

    cout<<"finding->"<<m.count(9)<<endl;
    m.erase(2);
    for(auto i:m){
        cout<<i.first<<"    "<<i.second<<endl;
    }

    auto it= m.find(4);
    for(auto i=it; i!=m.end(); i++){
        cout<<(*i).first<<"  "<<(*i).second<<endl;
    }

    //unordered map...
        //its implemented by Hash
    //searching take time O(1);
}