#include<stdio.h>

main()
{
	int i,a;
	
	for(i=1;i<=5;i++)
	{
		for(a=1;a<=i;a++)
		{
			if(a%2==1)
			printf("1");
			else
			printf("0");
		}
		printf("\n");
	}
}
