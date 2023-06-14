#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Num:";
    cin>>num;
    int digit,max=INT32_MIN;
    
    while(num>0){
        digit=num%10;
        if(digit>max){
            max=digit;
        }
        else{
            num=num/10;
        }
    }

    cout<<"Biggest Digit in the Number is:"<<max;
}