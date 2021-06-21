main()
{
    int num,temp,sum=0,r;
    printf("enter a number");
    scanf("%d",&num);
    for(temp=num;num!=0;num=num/10)
    {
    	r=num%10;
    	sum=sum+(r*r*r);
	}
	if(sum==temp)
	{
		printf("this is armstrong number");
	}
	else
	{
		printf("not an armstrong number");
	}
}
