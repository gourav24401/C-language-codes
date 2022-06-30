#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float a;
	float b;
	float c;
	float d;
	float e;
	float area; 
	printf("enter first side of triangle:\n");
	scanf("%f",&a);
	printf("enter second side of triangle:\n");
	scanf("%f",&b);
	printf("enter third side of triangle:\n");
	scanf("%f",&c);
	d=(a+b+c)/2;
	e=(d*(d-a)*(d-b)*(d-c));
	area=sqrt(e);
	printf("area of triangle is %f",area);
	
	return 0;
}
