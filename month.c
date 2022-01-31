#include<stdio.h>
main()
{
	int a;
	printf("Enter the value for a=");
	scanf("%d",&a);
	if(a<=12 && a>=1)
	{
		printf("valid");
	}
	else
	{
		printf("not valid");
	}
}
