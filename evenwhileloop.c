#include<stdio.h>
void main()
{
	int a,b,i;
	scanf("%d%d",&a,&b);
	while(a<=b)
	{
		if(a%2 == 0)
		{
			printf("%d",a);
		}
		a++;
	}
}
