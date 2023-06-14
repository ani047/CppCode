/*
    Array in C
    *Collection of similar type of data.
    *Contigious memory allocations.
    *Size is fixed.
    *Rendom Access.
    *Calculation will Easy.
*/

//Make the Array and its length should be 5; take the input from the user and find the sum of all those?
#include<stdio.h>
int main()
{
	int i,num,sum=0;
	printf("Enter the size of array-->");
	scanf("%d",&num);
	int arr[num];
	if(num>0)
	{
		printf("Enter the Elements of Array\n");
		
		for(i=0; i<num; i++)
		{
			scanf("%d",&arr[i]);
		}
		for(i=0; i<num; i++)
		{
			sum=sum+arr[i];
		}
		printf("\nThe sum of Array will %d",sum);
	}
	else
	printf("Invalid Input");
	
 } 

