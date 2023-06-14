#include<iostream>
using namespace std;
void swapAlternate(int a[],int n)
{
	
	for(int i=0; i<n; i+=2){
		if(i+1<n)
		{
			swap(a[i],a[i+2]);
    	}
		i++;
	}
}

void printAlternate(int arr[],int num)
{
	for(int i=0; i<num; i++)
	{
		cout<<arr[i]<<"  ";
	}cout<<endl;
}
int main()
{
	int i,size,arr[20];
	cout<<"Enter the Value of size->";
	cin>>size;
	for(i=0; i<size; i++){
		cin>>arr[i];
	}
	swapAlternate(arr,size);
	printAlternate(arr,size);
}
