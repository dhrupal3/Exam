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
		if(a[i]<0)
		{
			printf("Your Negetive Value = %d\n",a[i]);
		}
		
	}
}
