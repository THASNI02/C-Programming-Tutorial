#include<stdio.h>

main()
{    
    int x,y,sum=0,i;
	printf("Enter the values for x and y");
	scanf("%d%d",&x,&y);
    for(i=x;i<=y;i++)
    {
    	if(i%2!=0)
    	{
    		sum=sum+i;
		}
	}
	printf("result=%d",sum);

}
