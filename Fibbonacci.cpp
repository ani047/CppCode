#include<iostream>
using namespace std;
int main()
{
	int n;
	int a=0,b=1;
	cout<<"Enter the Value of n-->";
	cin>>n;
	cout<<a<<","<<b<<",";
	int term=a+b;
	while(term<=n)
	{
		cout<<term<<",";
		a=b;
		b=term;
		term=a+b;
		term++;
	}
	
	
}
