#include<stdio.h>
int main()
{
	int n,i,count;
	printf("Enter the Value of num -->");
	scanf("%d",&n);
	for(i=1; i<100; i++)
	{
		if(i%n==0)
		{
			printf("\n %d",i);
		    count++;
		}
	}
	printf("\n There are %d Multiple of %d",count,n);

}
