#include<iostream>
#include<string.h>
using namespace std;

string reverse(string s1, string str){
     int s=0;

    int e=s1.size()-1;
    while(s<e){
        swap(s1[s++],s1[e--]);
    }

    
    cout<<s1;

}
int main(){
    string str,temp;
    getline(cin, str);

    int s=0;

    int e=str.size()-1;

    for(int i=0; i<str.size(); i++){
        // temp = ' ';
        if(str[i] != ' '){
            temp[i]=str[i];
        }
        else{
            reverse(temp,str);
        }
    }

    

   



    
}