/*
find the sum of all digits...
*/
#include<stdio.h>
int main()
{
	int num,rem,sum=0;
	printf("Enter the value of num-->");
	scanf("%d",&num);
	while(num>0){
		rem=num%10;
		sum=sum+rem;
		num=num/10;
		num++;
		
	}
}
