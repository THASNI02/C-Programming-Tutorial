main()
{
	int i,root=0;
	printf("perfect sqauares :");

	for(i=1;i<=100;i++)
	{
		
		root=sqrt(i);
		
		if(i==(root*root))
		{
			printf("%d, ",i);
		}
	}
}
