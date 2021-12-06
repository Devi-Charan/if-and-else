#include<stdio.h>
main()
{
	int a,b,c,d,e,t;
	float tp;
	printf("Enter the marks in the subject= ");
	scanf("%d",&a);
	printf("Enter the marks in the subject= ");
	scanf("%d",&b);
	printf("Enter the marks in the subject= ");
	scanf("%d",&c);
	printf("Enter the marks in the subject= ");
	scanf("%d",&d);
	printf("Enter the marks in the subject= ");
	scanf("%d",&e);
	t=(a+b+c+d+e);
	tp=(float)(t*100)/500; 
    printf("%d\n%f",t,tp);
	if(tp>90)
    {
    	printf("\nGrade A");
	}
	else if(tp>80)
	{
    	printf("\nGrade B");
	}
	else if(tp>70)
	{
    	printf("\nGrade C");
	}
	else if(tp>40)
	{
    	printf("\nGrade D");
	}
	else if(tp<40)
	{
    	printf("\nGrade E");
	}
}
