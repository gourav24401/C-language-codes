#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,sum=0,avg;
	printf("enter 10 numbers for which you want to calculate average\n");
	for(i=0;i<10;i++)
	{
		printf("enter array at %d position:-\n",i+1);
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	avg=sum/10;
	printf("Average of numbers is %d",avg);
	getch();
}
