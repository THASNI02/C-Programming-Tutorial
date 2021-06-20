main()
{
	int num,rem,bin=0,place=1;
	printf("Enter a number");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%2;
		bin=bin+(rem*place);
		place=place*10;
		num=num/2;
	}
	printf("binary equivalent is  %d",bin);
}
