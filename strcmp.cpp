#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char str1[10];
    char str[10];
    cout<<"Str1:";
    gets(str1);
    cout<<"str2:";
    gets(str);
    if(stricmp(str,str1)){
        cout<<"Sorry";

    }
    else{
        cout<<"Done";
    }
    
    
}
/*
int result=stricmp(str,str1);
    if(result==0){
        cout<<"done";

    }
    else{
        cout<<"Sorry";
    }
    */
   