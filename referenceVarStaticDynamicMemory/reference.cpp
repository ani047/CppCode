#include<iostream>
using namespace std;
void update(int& num){
    num=num+1;
}
int main(){
    int num;
    cin>>num;
    //reference is nothing but same memory but different - different name

    //creating reference va.../

    int& var=num;
    /*
    cout<<"num:"<<num<<endl;
    num++;
    cout<<"var:"<<var<<endl;
    var++;
    cout<<"num:"<<num<<endl;
    */
    update(num);
    cout<<"num:"<<num<<endl;



}