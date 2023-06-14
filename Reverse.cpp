/*
Reversew the digits thet is taking from the user...
*/
#include<stdio.h>
int main()
{
	int num,i,rev,ans=0;
	printf("Enter the Number-->");
	scanf("%d",&num);
	if(num>0)
	{
		while(num>0)
		{
			rev=num%10;
			ans=ans*10+rev;
			num=num/10;
		}
		printf("\n %d",ans);
	}
	else
	{
		printf("Please give me Valid Number");
	}
}
