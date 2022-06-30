#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("Enter angles of three sides of triangle\n");
	scanf("%d%d%d",&a,&b,&c);
	if((a+b>=c)&&(b+c>=a)&&(c+a>=b))
	{
		printf("triangle is valid");
	}
	else
	{
		printf("triangle is invalid");
	}
	getch();
}
