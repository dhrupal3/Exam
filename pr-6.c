#include<stdio.h>

main()
{
	char e[100],p[100];
	int a;
	
	printf("Your Email = ");
	gets(e);
	
	printf("Your Password = ");
	gets(p);
	
	a=strlen(p);
	

		if(a<8)
		{
			printf("Plese ! Creat Hard And 8 Digit Password.");	
		}
		else
		{
			printf("Your Process Is Succesful.");
		}


}

