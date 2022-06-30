#include<stdio.h>
#include<conio.h>
void main()
{
	float L=1189,B=841;
	int l1,l2,l3,l4,l5,l6,l7,l8,b1,b2,b3,b4,b5,b6,b7,b8;
	printf("size of A1 size paper is %dx%d\n",l1=B,b1=L/2);
	printf("size of A2 size paper is %dx%d\n",l2=b1,b2=l1/2);
	printf("size of A3 size paper is %dx%d\n",l3=b2,b3=l2/2);
	printf("size of A4 size paper is %dx%d\n",l4=b3,b4=l3/2);
	printf("size of A5 size paper is %dx%d\n",l5=b4,b5=l4/2);
	printf("size of A6 size paper is %dx%d\n",l6=b5,b6=l5/2);
	printf("size of A7 size paper is %dx%d\n",l7=b6,b7=l6/2);
	printf("size of A8 size paper is %dx%d\n",l8=b7,b8=l7/2);
	getch();
}
