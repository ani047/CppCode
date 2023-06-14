#include<iostream>
using namespace std;
int table(int num , int a){
    //base case.../
    if(a==0){
        return 1;
    }

    //recursive relation.../
    table(num,a-1);

    //processing.../

    cout<<num*a<<endl;
}
int main(){
    int tableNum;
    int num=10;
    cout<<"Enter the Table Number:";
    cin>>tableNum;
    table(tableNum,num);
}