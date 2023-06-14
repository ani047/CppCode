#include<iostream>
using namespace std;
int func(int num){
    //base case.../
    if(num==0){
        return 1;
    }

//recursive relation.../
func(num-1);    

}
int main(){
    int n;
    cin>>n;
    cout<<func(n);
}