#include<stdio.h>

main()
{
	int a,b,c;
	
	printf("Enter Your First Value = ");
	scanf("%d",&a);
	printf("Enter Your Second Value = ");
	scanf("%d",&b);
	printf("Enter Your Third Value = ");
	scanf("%d",&c);
	
	(a>b) ? (a>c) ? printf("A is Max."): printf("C is Max") :
			(b>c) ? printf("B is Max."): printf("C is Max") ;
	
}
