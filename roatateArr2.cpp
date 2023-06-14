#include<iostream>
using namespace std;
int main()
{
	int size,i,d;
	cout<<"Enter the value of size->";
	cin>>size;
	cout<<"Enter the number of Roatatetion->";
	cin>>d;
	
	int arr[20];
	for(i=0; i<size; i++)
	{
		cin>>arr[i];
		
	}
	
	for(i=0; i<d; i++)
	{
		swap(arr[i],arr[i+1]); 
	}

	
	
	for(i=0; i<size; i++)
	{
		cout<<arr[i]<<"   ";
	}
	
}
