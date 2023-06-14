#include<iostream>
using namespace std;
int main()
{
	int n,i,sum=0; 
	int a[10];
	cout<<"Enter the Value of n->";
	cin>>n;
	for(i=0; i<n; i++)
	{
		cin>>a[i];
		
	}
	for(i=0; i<n; i++){
		sum=a[i]+sum;
	}
	cout<<"Sum is: "<<sum<<endl;
}
