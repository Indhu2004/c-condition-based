#include<stdio.h>
void main()
{
	int i,a,product=1;
	printf("enter a number");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		product=product*i;
	}
	printf("%d",product);
	
}
