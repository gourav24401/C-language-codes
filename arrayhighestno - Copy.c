#include<stdio.h>
#include<conio.h>
void main()
{
	int a[20];
	int i,n,sum=0;
	printf("enter no of values you wish to enter\n");
	scanf("%d",&n);
	printf("enter values of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[0]<a[i])
		{
			a[0]=a[i];
		}
		else
		{
			continue;
		}
	}
  	printf("highest number is %d\n",a[0]);
  		for(i=0;i<n;i++)
	{
		if(a[0]>a[i])
		{
			a[0]=a[i];
		}
		else
		{
			continue;
		}
	}
  	printf("smallest number is %d",a[0]);
	getch();
}
