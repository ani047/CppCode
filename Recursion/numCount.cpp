#include<iostream>
using namespace std;
int count(int n){
    //base case.../
    if(n==0)
        return 1;

    //recursive relation.../

    count(n-1);
    
    //processing.../
    cout<<n<<endl;

    
}
int main(){
    int num;
    cout<<"Num:";
    cin>>num;
    count(num);
}