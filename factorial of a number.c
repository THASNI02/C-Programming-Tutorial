#include<stdio.h>

main()
{
	int num,fact=1,i;
	printf("Enter a number");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	printf("Result=%d/n",fact);
	
}
