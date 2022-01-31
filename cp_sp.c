#include<stdio.h>
main()
{
	int p,l,cp,sp;
	printf("Enter the cp=");
	scanf("%d",&cp);
	printf("Enter the sp=");
	scanf("%d",&sp);
	p=sp-cp;
	l=cp-sp;
	if(sp>cp)
	{
		printf("It is profit");
		printf("\nprofit= %d",p);
    }
	else
	{
		printf("It is loss");
		printf("\nloss= %d",l);
	 } 
}
