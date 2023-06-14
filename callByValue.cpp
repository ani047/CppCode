#include<iostream>
using namespace std;
/*
int update(int a)
{
	a-=5;
	return a;
}
int main()
{
	int a=15;
	update(a);
	cout<<a;
}


int  sum(int a)
{
	a=a/2;
	return a;
}
int main()
{
	int a=22;
	sum(a);
	cout<<a;
}
*/
int sum(int a,int b)
{
	int sum=a+b;
	b++;
	return sum;
}
int main()
{
	int num1,num2;
	cin>>num1;
	cin>>num2;
	int add=sum(num1,num2);
	cout<<add<<endl;
	cout<<num2<<endl;
}
