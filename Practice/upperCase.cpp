#include<iostream>
using namespace std;
char toLowerCase(char c){
    if(c>='a' && c<='z'){
        return c;
    }
    else{
        char temp = c - 'A' + 'a';
        return temp;
    }
}
int main(){
    char ch;
    cout<<"Ch:";
    cin>>ch;
    char temp = toLowerCase(ch);
    cout<<temp<<endl;
}


/*
    char toLowerCase(char ch) {
    if( (ch >='a' && ch <='z') || (ch >='0' && ch <='9') )
        return ch;
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
*/