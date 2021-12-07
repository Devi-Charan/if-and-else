#include<stdio.h>
main()
{
	int basic;
	float hra,da,gs;
	printf("Enter the salary= ");
	scanf("%d",&basic);
	if(basic<=10000)
	{
	hra=(float)(basic*20)/100;
	da=(float)(basic*80)/100;
	gs=basic+hra+da;
	printf("%f",gs);
	}
	else if(basic<=20000)
	{
	hra=(float)(basic*25)/100;
	da=(float)(basic*90)/100;
	gs=basic+hra+da;
	printf("%f",gs);
	}
    else if(basic>20000)
	{
	hra=(float)(basic*30)/100;
	da=(float)(basic*95)/100;
	gs=basic+hra+da;
	printf("%f",gs);
	}
}

