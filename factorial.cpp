/*
find the factorial from the given number
*/
#include<stdio.h>
int main()
{
	int fact=1,num,i;
	printf("Enter the value of num-->");
	scanf("%d",&num);
	for(i=num; i>1; i--)
	{
		fact=fact*i;
	}
	printf("%d",fact);
}
