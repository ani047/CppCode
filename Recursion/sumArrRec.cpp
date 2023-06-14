#include<iostream>
using namespace std;
int sumArr(int arr[], int size){
    //base case../
    if(size==0){
        return 0;
    }

    if(size==1){
        return arr[0];
    }

  
    //recursive relation.../
    return arr[0]+sumArr(arr+1,size-1);
}
int main(){
    int arr[10];
    int size;
    cout<<"size:";
    cin>>size;
    //input eements...
    // 1 3 4 5 6 7
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    cout<<"The Value of Arrays Sum is:"<<sumArr(arr,size);

    

// for(int i=0; i<size; i++){
//     cout<<arr[i]<<"  ";
// }

// cout<<endl<<sum;
    

}