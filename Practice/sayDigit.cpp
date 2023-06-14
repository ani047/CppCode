#include<iostream>
using namespace std;
void sayDigit(int num,string arr[]){
    //base case
    if(num==0)
        return ;
    
    //process
    int digit = num%10;
    num=num/10;

    //recursive relation...
    sayDigit(num,arr);

    cout<<arr[digit-1]<<"  ";
}
int main(){
    int num;
    cout<<"Num:";
    cin>>num;
    string arr[10]={"One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    sayDigit(num,arr);
}