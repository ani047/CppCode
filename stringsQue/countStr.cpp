#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

int main(){
    string s,str;
    int cnt=0;
   
    cout<<"Enter the String:";
    getline(cin,s);
    int n=s.length();


    cout<<endl<<s<<endl;

    for(int i=0; i<n; i++){
        if(s[i]==' '){

            cout<<cnt<<endl;
            cnt=0;
        }
        else{
            cnt++;
        }
        
    }

    

}