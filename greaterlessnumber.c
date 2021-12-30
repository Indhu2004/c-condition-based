#include<stdio.h>
void main()
{
	int num1,num2;
	printf("enter the two num");
	scanf("%d%d",&num1,&num2);
	if(num1>num2)
	{
		printf("%d", num1);
	}
	else if(num1<num2)
	{
		printf("%d", num2);
	}
	else
	{
		printf("zero");
	}
}
