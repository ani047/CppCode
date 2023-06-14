#include<iostream>
using namespace std;
int func(int * a){
    cout<<a<<"  2 "<<*a<<endl;

    *a+=1;
}
int main(){
    char c[5]="s";
    char * ptr= c;

    cout<<ptr<<endl;

    //pointer with function...

    int value=4;
    int *p=&value;
    cout<<p<<"  1 "<<(*p)<<endl;

    func(p);
    cout<<p<<"  3 "<<(*p)<<endl;

}