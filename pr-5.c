#include<stdio.h>

main()
{
	int a[100],n,i,s=0;
	
	printf("Enter Array Value = ");
	scanf("%d",&n);
	
	printf("Enter Array = ");
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		s=s+a[i];
	}
	
	printf("Your Answer = %d",s);
}
