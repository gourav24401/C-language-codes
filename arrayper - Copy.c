#include<stdio.h>
#include<conio.h>
void main()
{
	int a[20],P;
	int i,n,sum=0;
	printf("enter no of subjects you wish to enter\n");
	scanf("%d",&n);
	printf("enter marks obtained\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	P=sum/n;
	printf("percentage is %d",P);
	getch();
}
