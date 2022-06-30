#include<stdio.h>
#include<conio.h>
int main()
{
	int a[2][2],b[2][2],result[2][2];
	int i,j,k;
	printf("enter elements in Matrix A of size 2x2\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("enter value of element a[%d][%d]\n",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter elements in Matrix B of size 2x2\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("enter value of element b[%d][%d]\n",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("Resultant matrix after addition is\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			result[i][j]=a[i][j]+b[i][j];
			printf("%d \t",result[i][j]);
		}
		printf("\n");
	}
}
