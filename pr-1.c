#include<stdio.h>

main()
{
	char n;
	printf("M=Monday.\n");
	printf("t=Tuesday.\n");
	printf("W=Wensday.\n");
	printf("T=Thursday.\n");
	printf("F=Friday.\n");
	printf("S=Saturday.\n");
	printf("s=Sunday.\n\n");
	printf("Enter Day = ");
	scanf("%c",&n);

	switch(n)
	{
		case'M':
			    printf("Monday");
			    break;

		case't':
			    printf("Tuesday");
			    break;

		case'W':
			    printf("Wednesday");
			    break;

		case'T':
			    printf("Thursday");
			    break;	

		case'F':
			    printf("Friday");
			    break;	

		case'S':
			    printf("Saturday");
			    break;	

		case's':
			    printf("Sunday");
			    break;

	    default:
	    	     printf("Enter Correct Value.");


	}

 return 0;	



}
