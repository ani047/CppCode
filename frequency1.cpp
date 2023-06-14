#include<iostream>
using namespace std;
void printArray(int a[],int n){
		for(int i=0;i<n; i++){
		cout<<a[i]<<"  ";
	}
	
}
void inputArray(int a[],int n){
	for(int i=0; i<n; i++){
		cin>>a[i];
		
	}
}
void sumpair(int arr[],int size){
	int temp,ans=0;
	for(int i=0; i<size; i++)
	{
		if(arr[i]==arr[size-1] && i<size-1)
		{
			ans++;
			temp=arr[i];
			
		}
		else{
			size--;
		}
	}
	cout<<endl<<temp<<"->"<<ans;
}
int main(){
	int arr[20],i,size;
	cout<<"Enter the size of Array->";
	cin>>size;
	cout<<"Enter the elements of Array..."<<endl;
	inputArray(arr,size);
	sumpair(arr,size);
	printArray(arr,size);

}
