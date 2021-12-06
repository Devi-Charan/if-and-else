#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter the values of a=");
	scanf("%d",&a);
	printf("Enter the values of b=");
	scanf("%d",&b);
	printf("Enter the values of c=");
	scanf("%d",&c);
	if(a<b&&a<c)
	{
		printf("A is minimum of three numbers");
	}
	else if(b<a&&b<c)
	{
		printf("B is minimum of three numbers");
	}
	else
	{
		printf("C is minimum of three numbers");
	}
}
