#include<iostream>
#include<array>
using namespace std;
int main(){
    //declaration of array in stl;
    array<int,5> arr;

    cout<<"Enter the element..."<<endl;

    //inpt the value from user...
    for(int i=0; i<arr.size();i++){
        cin>>arr[i];
    }
    cout<<endl<<endl;

    //size of array...
    cout<<arr.size()<<endl;

    //using at index...
    cout<<arr.at(3);
    cout<<endl;
    cout<<arr.empty();
//when the arr is empty then it will return 1 else 0;
    

    //front..
    cout<<endl<<arr.front()<<endl;

    //back...

    cout<<arr.back()<<endl;


    //the time complexity will be O(1);




}