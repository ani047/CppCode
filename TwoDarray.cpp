/*
2D Array in C Language...
*/
#include<stdio.h>
int main()
{
	int i,j,row,col;
	printf("\n Enter the number of Row-->");
	scanf("%d",&row);
	printf("\n Enter the number of Col-->");
	scanf("%d",&col);
	int arr[row][col];
	printf("Enter the Elements of Array...\n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			scanf("%d",&arr[i][j]);
		}
		
	}
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("   %d",arr[i][j]);
		}
		printf("   \n\n");
		
	}
	
	
	//Printing to diagonal of 2D Array...
	printf("\n Diagonal is ...");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			
			if(i==j)
			{
				printf("\n %d",arr[i][j]);
			}
		}
		printf("\n");
	}
}
