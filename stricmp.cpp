#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char str[100];
    gets(str);
    char str2[100];
    strcpy(str2,str);
    strrev(str);
    int result=strcmp(str,str2);
    if(result==0){
        cout<<"Palindrom";
    }
    else{
        cout<<" Sorry Not!";
    }
    }
    // cout<<str<<endl;
    // cout<<str2;


