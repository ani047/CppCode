#include<iostream>
#include<string.h>
using namespace std;

char toLowerCase(char ch){
    if(ch==' '){
        return ' ';
    }
    if((ch>='a' && ch<='z')){
        return ch;
    
    }
    else{
        char temp;
        temp = ch - 'A' + 'a';
        return temp;

    }
}
int main(){
    string str,str2;
    int s=0;
    int e=str.length();
    
    cout<<"String:";
    getline(cin,str);

    for(int i=0; i<str.length(); i++){    
        str2.push_back(toLowerCase(str[i]));
    }
    str=str2;
    cout<<str2;
    

}