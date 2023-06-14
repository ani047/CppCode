#include<iostream>
#include<string.h>
using namespace std;
void len(string str){

    int  n = str.length();
    for(int i=0; i< n/2; i++){
        swap(str[i],str[n-i-1]);
    }
    //cout<<str;
    
}

int main(){
    char str[100];
    cout<<"Enter the String:";
    gets(str);
    len(str);
    cout<<str;

    




    




//    string str;
//    cout<<"Enter the String:";
//    getline(cin,str);
//    cout<<endl<<str;
//    str.push_back('ok');
//    cout<<str;
//    str.pop_back();
//    cout<<str;

}