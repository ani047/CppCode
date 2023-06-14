#include<stdio.h>
int main()
{
	/*
	int a=12;
	int*ptr;
	int**p1;
	ptr=&a;
	p1=&ptr;
	printf("\n %u",ptr);
	printf("\n %u",p1);
	printf("\n %d",*p1);
	*/
	
	//Array itself Pointer...
	
	/*
	int arr[]={23,89,56,82,90,12};
	printf("%d",arr);
	printf("\n%d",*(arr+2));
	*/
	
	
	
	//2D-Array in pointer...
	int arr[3][3]={{23,45,67},{12,98,67}};
	
	printf("%d",arr);
	printf("\n%d",**(arr+2));
	
}
