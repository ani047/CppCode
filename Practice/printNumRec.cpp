#include<iostream>
using namespace std;
int printNum(int num){
    //base base 
    if(num==0){
        return 1;
    }

    //recursive relation
    printNum(num-1);

    //process
    cout<<num<<endl;

}
int main(){
    int num;
    cin>>num;
    printNum(num);
}