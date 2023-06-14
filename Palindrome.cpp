/*
the digits thet is taking from the user...
*/
#include<stdio.h>
int main()
{
	int num,i,rev,ans=0;
	printf("Enter the Number-->");
	scanf("%d",&num);
	int new_num=num;
	if(num>0)
	{
		while(num>0)
		{
			rev=num%10;
			ans=ans*10+rev;
			num=num/10;
		}
		if(new_num==ans)
		{
			printf("\n This number is Palindrome like %d",ans);
		}
		else
		{
			printf("\n Reverse number is %d",ans);
		}
		
	}
	else
	{
		printf("\n Please give me Valid Number");
	}
}
