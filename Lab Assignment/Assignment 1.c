//1 .Write a program in C to display n terms of natural number and their sum.



#include<stdio.h>
int main()
{
int n,i,sum=0;
printf("Enter the value of n:");
scanf("%d",&n);
for(i=1;i<=n;++i)
{
printf("\t%d",i);
sum+=i;
}
printf("\n\nSum of first %d natural numbers is:%d",n,sum);
return 0;
}
