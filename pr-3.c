#include<stdio.h>

main()
{
	int n,a=1;
	
	printf("Enter Multiplication Number = ");
	scanf("%d",&n);
	
	while(a<=10)
    {
        printf("%d",n);
        printf(" x %d",a);
        printf(" = %d\n",n*a);
        a++;
    }

}
