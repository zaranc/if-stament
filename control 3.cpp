#include<stdio.h>

main()
{
	
	int age; 
	printf("plzz enter your age");
	scanf("%d",&age);
    if (age<=0)
	{
		printf("plzz enter corect age ");
	}
	else if(age>=18)
	{
		printf("your are eligble for woting ");
	}
	else if (age<=18)
	{
		printf(" your are not eligble for woting");
	}
	else if (age<=0)
	{
		printf("plzz enter corect age ");
	}
}
