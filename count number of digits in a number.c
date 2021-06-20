main()
{
	int num,count=0;
	printf("Enter an integer");
	scanf("%d",&num);
	while(num!=0){
		num=num/10;
		count=count+1;
		
	}
	printf("Number of digits: %d",count);
}
