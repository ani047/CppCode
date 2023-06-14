#include<stdio.h>
//This is function declaration and defination also;
int fun(register int x)
{
	x=10;
	printf("%d",x);
	x++;
}
int main()
{
	int y;
	printf("Enter the Value of y-->");
	scanf("\n %d",&y);
	
	fun(y);
	printf("\n %d",y);
}
