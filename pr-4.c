#include<stdio.h>

main()
{
	int a=1,i,n;
	
	printf("Enter Your Factorial Number = ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{ 
		a=a*n;  
	}
	printf("Your Answer = %d",a);
}
