#include<stdio.h>
main()
{
	int a;
	printf("Enter the value for a=");
	scanf("%d",&a);
	if(a%5==0 && a%11==0)
	{
		printf("valid");
	}
	else
	{
		printf("it is not valid");
	}
}
