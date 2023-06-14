#include<iostream>
#include<cmath>
using namespace std;
bool isPowerOfTwo(int n)
{
  if (n == 1)
    return true;
  else if(n%2!=0 || n==0){
    return false;

  }
  return isPowerOfTwo(n/2);
}
int main(){
    int arr[10],size;
    cout<<"Enter the size of Array->";
    cin>>size;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    for(int i=0; i<size; i++){
        if(isPowerOfTwo(arr[i])==1)
        cout<<arr[i]<<"  ";
    }
    
}


