main()
{
	int first=0,second=1,sum=0,n;
	printf("Enter the end term for the series: ");
	scanf("%d",&n);
	printf("Fibonocci series:%d,%d",first,second);
	sum=first+second;
	while(sum<=n)
	{
		printf("%d",sum);
		first=second;
		second=sum;
		sum=first+second;
	}
}
