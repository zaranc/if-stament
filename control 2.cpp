#include<stdio.h>

main()
{
	
	int num; 
	printf("enter namber");
	scanf("%d",&num);
	if(num==0)
	{
		printf("namber is neutral ");
	}
	else if (num>0)
	{
		printf("namber is positive ");
	}
	else if (num<0)
	{
		printf("namber is nagative ");
	}
}
