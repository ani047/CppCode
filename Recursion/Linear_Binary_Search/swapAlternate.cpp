#include<iostream>
using namespace std;
int alternateSwap(int arr[],int num)
{
    //Tail Recursion...
    for(int i=0; i<num; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    //base case
    if(num==0 || num==1){
        return 1;
    }

    swap(arr[0],arr[1]); 
    
    //recursive relation...
    alternateSwap(arr+2,num-2);
}
int main(){
    int arr[10],num;
    cout<<"num:";
    cin>>num;  //input of size of arr.../
    for(int i=0; i<num; i++){
        cin>>arr[i];       //input of elements.../
    }


    alternateSwap(arr,num);   //function calling....


    for(int i=0; i<num; i++){
        cout<<arr[i]<<" ";     //print the array..../
    }
}




/*
#include<iostream>
using namespace std;
int main()
{
    int arr[10],num;
    cout<<"Enter the size of array:";
    cin>>num;

    cout<<"Enter the elements...";
    for(int i=0; i<num; i++){
        cin>>arr[i];
    }
    //Before Swap...
    cout<<endl<<"Before Swap"<<endl;
    for(int i=0; i<num; i++){
        cout<<arr[i]<<" ";
    }

    //Swaping...
    for(int i=0; i<num-1; i++){
        swap(arr[i],arr[i+1]);
        i++;
    }

       //after the Swap...
    cout<<endl<<"After Swap"<<endl;
    for(int i=0; i<num; i++){
        cout<<arr[i]<<" ";
    }
}
*/
