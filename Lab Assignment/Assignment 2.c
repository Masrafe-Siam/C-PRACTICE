//2.Write a program in C to read 10 numbers from keyboard and find their sum and average.




#include<stdio.h>
int main()
{
int n,i,sum=0;
double avg;
printf("Enter the numbers:");
for(i=1;i<=10;i++)
{
printf("\nNumber-%d: ",i);
scanf("%d",&n);
sum+=n;
}
avg=sum/10.0;
printf("\n\nSum of the 10 num is :%d \nThe Average is :%.2f",sum,avg);
return 0;
}
