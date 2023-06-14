/*
#include<iostream>
using namespace std;
int main(){
    int arr[10],size,count;
    cout<<"Enter the size of Array:";
    cin>>size;

    cout<<"Enter the Elements..."<<endl;
     for(int i=0; i<size; i++){
        cin>>arr[i];
     }

     for(int i=0; i<size; i++){
        if(arr[i]==(arr[i+1]-1)){
            
            if(count==2){
                cout<<"true";
            }
            
        }
     }
     
}

*/

#include <bits/stdc++.h>
#include<iostream>
using namespace std;
  
// Function to Check if array
// elements are consecutive
 
bool areConsecutive(int arr[], int n)
{
    //Sort the arrays
    sort(arr,arr+n);
    // checking the adjacent elements
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[i-1]+1)
        {
            return false;
        }
    }
    return true;
}
 
/* Driver program to test above functions */
int main()
{
    int arr[]= {5, 4, 2, 3, 1, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    if(areConsecutive(arr, n) == true)
        cout<<" Array elements are consecutive ";
    else
        cout<<" Array elements are not consecutive ";
    return 0;
}