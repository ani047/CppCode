#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string str;
    cout<<"String:";
    getline(cin,str);
    int j=0;
    int size = str.length();
    string res="";
    for(int i=0; i<size; i++){
        if(str[i]==41){
            j--;
        }
        if(j!=0){
            res=res+str[i];
        }
        if(str[i]==40){
            j++;
        }
    }

    cout<<res;
}