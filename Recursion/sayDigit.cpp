#include<iostream>
using namespace std;
void sayDigit(string arr[],int n){
    //base case...
    if(n==0)
        return ;
    //processing...
    int digit=n%10;
    n=n/10;

    //recursive relation...
    sayDigit(arr,n);

    //processing.../
    cout<<arr[digit]<<"  ";
}
int main(){
    string arr[]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    int num;
    cout<<"Num:";
    cin>>num;
    sayDigit(arr,num);
}