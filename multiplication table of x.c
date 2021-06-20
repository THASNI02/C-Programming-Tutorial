main()
{
	int num,i,Res=0;
	printf("Enter the number");
	scanf("%d",&num);
	for(i=1;i<=10;i++)
	{
		Res=num*i;
		printf("%d * %d= %d\n",num,i,Res);
	}
}
