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
    string str;
    cout<<"String:";
    getline(cin,str);
    int s=0; 
    int e=str.length()-1;
    string str2, str3;
    //its for change the font as well transfer the data str to str2;
    for(int i=0; i<str.length(); i++){
        str2.push_back(toLowerCase(str[i]));
        
    }
    str3=str2;
    //string str2=str;
    while(s<e){
        swap(str2[s++],str2[e--]);
    }


    int res= str2.compare(str3);
    if(res==0){
        cout<<"Equal";
    }
    else{
        cout<<"Sorry! its not";
    }
    

    cout<<endl<<str2;

}