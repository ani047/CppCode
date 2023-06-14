/*
find the Max number from the Array
*/
#include<stdio.h>
int main()
{
	int i,num,max=0;
	printf("Enter the size of Array->");
	scanf("%d",&num);
	if(num>0)
	{
		int arr[num];
		printf("Enter the Elements of Array\n");
		for(i=0; i<num; i++)
		{
			scanf("%d",&arr[i]);
		}
		for(i=0;i<num; i++)
		{
			
			if(max<=arr[i])
			{
				max=arr[i];
			}
		
			
		}
		printf("\n Max element of the Array will %d",max);
	}
	else
	{
		printf("\n Invalid Input...");
	}

}
