#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,19,2,4,65};
    // arr is represent add of first block...

    cout<<arr<<endl;

    // & operator...

    //cout<<(arr[0])++<<endl;
    cout<<(arr[0])<<endl;

    cout<<&arr[2]<<endl;

    cout<<*arr<<endl;

    cout<<*(arr+1)<<endl;

    cout<<*arr+3<<endl;

    cout<<*(arr+4)<<endl;

    int i=3;
    arr[i]= *(arr+i);
    cout<<arr[i]<<endl;



    //pointer vs array...


    int a[10];

    int *p = a;

    cout<<"P wala:"<<p<<endl;
    cout<<"a wala:"<<a<<endl;

    cout<<sizeof(a)<<endl;


    int temp[7]={12,32,14,28,15,30};
    cout<<sizeof(temp)<<endl;
    int *pq = &temp[0];
    cout<<sizeof(pq)<<endl;

    cout<<sizeof(*temp)<<endl;

    cout<<sizeof(&temp)<<endl;




    //(2)  operator...

    int x[3]={1,2,4};
    cout<<&x[0]<<endl;
    cout<<x<<endl;
    cout<<&x<<endl;
    int *v=&x[0];
    cout<<v<<" "<<*v<<"  "<<&v<<endl;

    



    
    }