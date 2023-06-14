#include<iostream>
using namespace std;
int * update(int num){
    int * ptr= &num;
    return ptr;
}
int main(){
    int s=5;
    cout<<s<<"     ";
    cout<<update(s);
    cout<<s<<"     ";


    //Array.../
    int n;
    cin>>n;
    int arr[n];  //bad practice ...

    //why ? , we will understand it depply..

    // i want to store the char in heap and allocate the
    // allocate thr memory Dynamically...

    char * ch = new char;
    //as char now Array will like this...

    int * arr = new int[5];

}