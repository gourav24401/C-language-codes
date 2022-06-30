#include<stdio.h>
#include<conio.h>
void main()
{
	int a[20];
	int i,n;
	printf("enter no of values you wish to enter\n");
	printf("enter value of array\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("resultant array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	getch();
}
