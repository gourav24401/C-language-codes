#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5];
	int i,n,position,value;
	printf("enter no of values you wish to enter\n");
	scanf("%d",&n);
	printf("enter values of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter value of element and position of element in array \n");
	scanf("%d",&value);
	scanf("%d",&position);
	for(i=n-1;i>=position-1;i--)
	{
	 a[i+1]=a[i];
	}
	a[position-1]=value;
  	printf("resultant array is:\n");
  	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	getch();
}
