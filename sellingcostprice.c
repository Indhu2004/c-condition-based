#include<stdio.h>
void main()
{
	int profit,loss,sellingprice,costprice;
	printf("enter costprice and sellingprice");
	scanf("%d%d",&costprice,&sellingprice);
	if(sellingprice>costprice)
	{
	printf("profit");	
	}
	else if(sellingprice<costprice)
	{
		printf("loss");
	}
	else
	{
		printf("zero");
	}
	
	}
