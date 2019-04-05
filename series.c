
/*Write a program to print sum of the following series:

      1 3 5 7 9 11......

      up to n numbers taking only an integer n as input.*/
#include<stdio.h>
void main()
{
int a,b,i,sum=0;
printf("Enter the starting number=\t");    //starting number of series
scanf("%d",&a);
printf("Enter the end number=\t");        //end number of series
scanf("%d",&b);
for(i=a;i<=b;i++)
{
if(i%2!=0)
{
sum=sum+i;
}
}
printf("sum of the series is= %d",sum);     //sum of the series
printf("\n");
}
