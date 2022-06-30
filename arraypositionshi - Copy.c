#include<stdio.h>
void main()
{
	int j,a[20],num,i,n;
	int value,loc;
	printf("Enter number of elements in array\n");
	scanf("%d",&n);
	printf("Enter elements of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter location\n");
	scanf("%d",&loc);
	printf("Enter value\n");
	scanf("%d",&value);
	for(i=n-1;i>=loc-1;i--)
	{
		a[i+1]=a[i];
	}
	a[loc-1]=value;
	printf("resultant array is:\n");
	for(i=0;i<=n;i++)
	{
		printf("%d\n",a[i]);
	}
	getch();
	}
