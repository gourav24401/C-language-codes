#include<stdio.h>
#include<conio.h>
int main()
{
	long int a;
	int b,c,d,e,f,g;
	printf("enter a five digit number");
	scanf("%ld",&a);
	b=a%10;
	c=(a%100)/10;
	d=(a%1000)/100;
	e=(a%10000)/1000;
	f=(a%100000)/10000;
	g=(f+1)*10000+(e+1)*1000+(d+1)*100+(c+1)*10+(b+1);
	printf("sum of digits of the number is %d",g);
	getch();
    return 0;
}
