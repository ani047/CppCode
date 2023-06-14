#include<iostream>
using namespace std;
int power(int num){
    //base case.../
    if(num==0)
        return 1;
    
    // //processing.../
    // cout<<num;

    //recursive relation.../
    return 2 * power(num-1);

}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    // power(n);
    cout<<power(n);
}