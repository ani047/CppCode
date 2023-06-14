/*
Nested for Loops...
*/
#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=0; i<=(n*2)-2; i=i+2)
	{
		for(j=0; j<=i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
