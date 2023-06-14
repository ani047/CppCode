#include<iostream>
#include <bits/stdc++.h>
using namespace std;
bool areAnagram(string s1, string s2){
     int len1 = s1.length();
    int len2 = s2.length();

    if(len1!=len2){
        return false;
    }

    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());


    for(int i=0; i<len1; i++){
        if(s1[i]!=s2[i]){
            return false;
        }
    }

    return true;
}
int main(){
    string str1,str2;
    cout<<"First String:";
    getline(cin,str1);

    cout<<"Second String:";
    getline(cin,str2);

    char ch;

    for(int i=0; i<str1.length(); i++ ){
        ch = tolower(str1[i]);
        str1[i]=ch;
    }

    for(int i=0; i<str2.length(); i++){
        ch = tolower(str2[i]);
        str2[i]=ch;
    }

   
    if(areAnagram(str1,str2)){
        cout<<"Strings are Anagram...";
    }
    else{
        cout<<"Strings are not Anagram...";
    }


}