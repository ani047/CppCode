
//problem is successfuly solved...;

#include<iostream>
using namespace std;

int roatatePrint(int arr[], int size)
{
	for(int i=0; i<size; i++)
	{
		cout<<arr[i]<<"   ";
	}cout<<endl;
}

int roatationSwap(int arr[],int size)
{
	
	for(int i=0; i<size; i++)
	{
		if(i<size-1)
		{
		swap(arr[i],arr[i+1]);
	}
	}
}

int input(int a[], int size)
{
	for(int i=0; i<size; i++)
	{
		cin>>a[i];
	}
}

int main(){
	int size,arr[20],d,count=0;
	cout<<"Enter the size of Array-->";
	cin>>size;
	cout<<"Enter the Roatation num-->";
	cin>>d;
	input(arr,size);
	while(count<d)
	{
		roatationSwap(arr,size);
		count++;
	}
	roatatePrint(arr,size);
	
}
