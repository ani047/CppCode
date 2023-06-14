#include<iostream>
using namespace std;
int printTable(int n,int i){
    //base case...
    if(n==0){
        return 0;
    }
    cout<<n*i<<endl;
    //recursive relation
    if(i<10)
        printTable(n,i+1);
    else    
        return 0;

}
int main(){
    int num, i=1;
    cout<<"Num:";
    cin>>num;
    printTable(num,i);
}