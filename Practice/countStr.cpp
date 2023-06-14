#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"str:";
    getline(cin,str);
    int len = str.length();
    int count=0,nums;
    for(int i=0; i<len-1; i++){
        for(int j=1; j<=len; j++){
            if(str[i]==str[j]){
                count++;
            }
        }
        nums=count+1;
        cout<<nums<<endl;
        count=0;
        
    }

}