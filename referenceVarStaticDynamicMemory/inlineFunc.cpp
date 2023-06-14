//get max from two numbers...
#include<iostream>
using namespace std;
inline int getMax(int& x, int& y){
    return (x>y)?x:y;
}
int main(){
    int a=3,b=5;
    int ans=0;
    ans = getMax(a,b);
    cout<<"ans:"<<ans<<endl;

    a+=5;
    b+=2;

    ans = getMax(a,b);

    cout<<"Ans 2:"<<ans<<endl;

}