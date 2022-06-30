#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
   float wind,temp,wcf;
   printf("Enter temperature in fahrenheit\n");
   scanf("%f",&temp);
   printf("Enter velocity in mph\n");
   scanf("%f",wind);
    wcf = 35.74 + 0.6215*temp + (0.4275*temp - 35.75) * pow(wind,0.16);
   printf("wind chill factor is %f",wcf);
   getch();
   return 0;
}
