#include<iostream>
using namespace std;
 bool valid(char ch){
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
            return 1;
        }
        else{
            return 0;
        }
        
    }

 
int main(){
    char ch;
    cin>>ch;
    cout<<valid(ch);
}