#include<stdio.h>


void div(int n )
{
	if(n%3==0 && n%5==0)
	{
		printf("number is divisible by 3 & 5 ");
	}
	else
	{
		printf("number is not divisible by 3 & 5 ");
	}
}

main()
{
	int a;
	printf("enter value of a = ");
	scanf("%d",&a);

	div(a	);
}

