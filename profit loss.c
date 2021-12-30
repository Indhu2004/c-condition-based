#include<stdio.h>
void main()
{
	int profit,loss,costprice,sellingprice;
	printf("enter costprice and sellingprice");
	scanf("%d%d",&costprice,&sellingprice);
	if(sellingprice>costprice)
	{
		printf("profit");
	}
else
{
	printf("loss");	
}

}
