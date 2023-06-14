#include<iostream>
#include<string.h>
using namespace std;

void reverse(string s, int len){
    int start=0;
    int e=len-1;
    while(start<e){
        swap(s[start++],s[e--]);
       
    }
    cout<<s;
}

int main(){
    string str;
    int length=str.size();
    cout<<"Enter the String:";
    getline(cin,str);
    reverse(str,length);

    // int s=0;
    // int e=length-1;
    // while(s<e){
    //     swap(str[s++],str[e--]);
    //     cout<<str;
    // }
    // cout<<str;
}