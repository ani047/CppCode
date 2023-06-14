#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char str[10];
    char str1[10];
    cout<<"Enter the string 1st:";
    gets(str);
    cout<<"Enter the string 2nd:";
    gets(str1);
    int length=strlen(str);
    //strcpy(str1,str);

    if(strcmp(str,str1)){
        cout<<"true";
    }

    //cout<<length<<endl;
    //cout<<str<<endl<<endl;
    //cout<<str1;

}