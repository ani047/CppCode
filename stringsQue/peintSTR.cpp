#include<iostream>
using namespace std;
int main(){
    char ch[10];
    cout<<"Enter:";
    cin>>ch;
    int i=0 , count=0;
    while(ch[i]!='\0'){
        i++;
        count++;
    } 
    cout<<endl<<ch<<endl;
    cout<<count;
    
}