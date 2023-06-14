#include<iostream>
using namespace std;
int& func(int m){
    int a = 78;
    int& ans=a;
    return ans;
}
int main(){
    int num;
    cin>>num;
    cout<<"Before:"<<num<<endl;
    func(num);
    cout<<"After:"<<num<<endl;


}