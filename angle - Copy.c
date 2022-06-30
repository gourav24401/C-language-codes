#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float x,y;
	float R,Theta;
	double degree,PI=3.1415926;
	printf("enter angles of sine and cosine in degrees\n");
	scanf("%f%f",&x,&y);
	Theta=(Theta*PI)/180;
	R=sin(Theta)*sin(Theta)+cos(Theta)*cos(Theta);
	printf("%f",R);
	getch();
}
