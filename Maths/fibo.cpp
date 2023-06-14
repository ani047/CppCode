#include<iostream>
using namespace std;
int main(){
    int nTerms;
    cout<<"nTerms:";
    cin>>nTerms;

    int count=0, n1=0, n2=1;
    if(nTerms<=0){
        cout<<"Please Enter Valid Number...";
    }else if (nTerms==1)
    {
        count<<n1,"       ";
    }

    else{
        while(count<nTerms){
            cout<<n1,"      ";
            int n = n1+n2;

            //updates...
            n1 = n2;
            n2 = n;
            count++;
        }
    }
}