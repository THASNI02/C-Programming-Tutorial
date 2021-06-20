main()
{
	int num,rev=0,rem,temp;
	printf("Enter a number");
	scanf("%d",&num);
	temp=num;
	while(num!=0){
		rem=num%10;
		rev=(rev*10)+rem;
		num=num/10;
		
	}
	if(temp==rev){
		printf("%d is palindrome",temp);
	}
	else{
		printf("number is not palindrome");
	}
}
