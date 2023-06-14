//program to find the factorial any numbers...
//num should be {{num<=10}}
#include<stdio.h>
int man()
{
	int i ,num,fact=1;
	printf("\n Enter the Value of num-->");
	scanf("%d",&num);
	if(num<=10)
	{
		for(i=num; i>=1; i--)
		{
			fact=fact*i;
		}
		
	}
	else {
		printf("\n Invalid Input please give us Valid Input");
	}
	printf("\n %d",fact);
	return 0;
	
}
