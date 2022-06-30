#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int d,c,temp,sum=0,num,i;
	printf("enter the number for which you want to check whether is armstrong or not \n");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		c++;
		num=num/10;
	}
	num=temp;
	while(num>0)
	{
		d=num%10;
		sum=sum+pow(d,c);
		num=num/10;
	}
	if(temp==sum)
	{
		printf("%d is an armstrong number\n",temp);
	}
	else
	{
		printf("%d is not an armstrong number\n",temp);
	}
}
