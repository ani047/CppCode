#include<iostream>
using namespace std;
int sum(int a[],int n)
{
	int sum=0;
	for(int i=0; i<n; i++)
	{
		sum=a[i]+sum;
		
	}
	return sum;
}
int main()
{
	int i,size,arr[20],sumoff;
	cout<<"Enter the Value of size->";
	cin>>size;
	cout<<"Enter the elements..."<<endl;
	for(i=0; i<size; i++)
	{
		cin>>arr[i];
		
	}
	cout<<sum(arr,size)<<endl;
	
	
}
