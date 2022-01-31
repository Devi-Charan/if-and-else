#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter the value of angle a=");
	scanf("%d",&a);
	printf("Enter the value of angle b=");
	scanf("%d",&b);
	printf("Enter the value of angle c=");
	scanf("%d",&c);
	if(a+b+c==180)
	{
		printf("it forms a triangle");
	}
	else
	{
		printf("it does not forms a triangle");
	}
}
