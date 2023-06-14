#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int arr[6][6];
	int i,j; 
	i=0,j=0;
	for(i=0; i<6; i++)
	{
		for(j=0; j<=i; j++)
		{
			arr[i][j]=0;
			if(i==j)
			{
				arr[i][j]=1;
			}
			if(j==0)
			{
				arr[i][j]=1;
			}
			
			//arr[i+1][j+1]=arr[i][j]+arr[i][j+1];
		  //arr[i+2][j+1]=arr[i+1][j]+arr[i+1][j+1];
			cout<<arr[i][j];
		}
		cout<<endl;
   }
   /*
   cout<<"After the Looping"<<endl;
   for(i=0; i<6; i++)
   {
   	for(j=0; j<i; j++)
   	{
   		arr[i+2][j+1]=arr[i+1][j]+arr[i+1][j+1];
   		cout<<arr[i][j];
	   }
	   cout<<endl;
   }
	*/	
}
/*
if(i==j)
			{
				arr[i][j]=1;
			}
			if(j==0)
			{
				arr[i][j]=1;
			}
*/
