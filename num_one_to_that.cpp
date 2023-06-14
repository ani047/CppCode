/*
Take the input from the user and print number 1 to that number; 
*/
#include<stdio.h>
int main()
{
	int num,i;
	printf("Enter the number-->");
	scanf("%d",&num);
	if(num>0)
	{
		for(i=1; i<=num; i++)
		{
			printf("\n %d",i);
		}
	}
	else
	{
		printf("Invalid Input...");
	}
	
}
