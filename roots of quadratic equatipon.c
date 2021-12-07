#include<stdio.h>
#include<math.h>
main()
{
	int a,b,c;
	float d,root1,root2;
	printf("Enter the coefficient of x^2= ");
	scanf("%d",&a);
	printf("Enter the coefficient of x= ");
	scanf("%d",&b);
	printf("Enter the coefficient of constant= ");
	scanf("%d",&c);
	d=b*b-4*a*c;
	//if d>0 roots are real 
	if(d>0)
	{
	    root1=(-b+sqrt(d))/2*a;
		root2=(-b-sqrt(d))/2*a;
		printf("The roots are real and differet and the roots are %f,%f",root1,root2);
	}
	//if d=0 real and same
	else if(d==0)	
	{
		root1= -b/(2*a);
		root2= -b/(2*a);
		printf("The roots are real and equal and they are %f,%f",root1,root2);
	}
	//if d<0 complex and different
	else if(d<0)
	{
			root1=(-b+sqrt(d))/2*a;
		    root2=(-b+sqrt(d))/2*a;	
		    printf("The roots are complex and different and they are %f,%f",root1,root2);
	}
}

