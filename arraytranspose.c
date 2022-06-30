#include<stdio.h>
#include<conio.h>
int main()
{
	int a[3][3],b[3][3],num;
	int i,j,k;
	printf("enter elements in Matrix A of size 3x3\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter value of element a[%d][%d]\n",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("matrix after transpose\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			b[i][j]=a[j][i];
			printf("%d \t",b[i][j]);
		}
		printf("\n");
	}
	
}
