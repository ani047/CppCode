#include<stdio.h>
int main()
{
	int n;
	int arr[]={23,54,43,89,68,90};
	int *ptr; 
	//ptr=&arr[2];
	//printf("rEnter the Value of n->");
	//scanf("%d",&n);
	
	/*
	printf("\n %d",ptr);
	printf("\n %d",*ptr+1);
	printf("\n %d",(*ptr-1));
	ptr=ptr-4;
	printf("\n %d",*ptr);
	*/
//------------------------------------------

	//Starting elements address of array will be base address
	
	int* p1=&arr[0];
	int *p2 = &arr[3];
	int k;
	printf("%u %u",p1,p2);
	k=p2-p1;
	printf("%u",k);
}
	
