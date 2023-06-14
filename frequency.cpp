#include<iostream>
using namespace std;
int main()
{

    int a[20],y[20],i,size;
	cout<<"Enter the size of Array->";
	cin>>size;
	for(i=0; i<size; i++)
	{
		y[i]=0;
	}
	for(i=0; i<size; i++)
	{
		cin>>a[i];
		
	}
	for(i=0; i<size; i++)
	{
		y[a[i]];
		cout<<y[i]<<"   ";
	}
	
}
