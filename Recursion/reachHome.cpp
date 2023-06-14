#include<iostream>
using namespace std;
void reachHome(int d, int s){
    cout<<"Destination: "<<d<<"Source: "<<s<<endl;
    //base case.../
    if(d==s)
        return ;
    //processing.../
    s++;
    //recursive relation.../
    reachHome(d,s);
}
int main(){
    int dest=10;
    int src=1;
    reachHome(dest,src);
}