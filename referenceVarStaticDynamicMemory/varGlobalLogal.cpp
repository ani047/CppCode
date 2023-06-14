#include<iostream>
using namespace std;
int num=3;
int function(int w){
    cout<<w<<endl;
}
int a(){
    int x;

}



int main(){
    cout<<num<<endl;
    function(num);
    num++;

    function(num);
    // cout<<x<<endl;  // we can not print because its private...

    
}