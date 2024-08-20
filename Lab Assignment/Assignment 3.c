//3.Write a program in C to display the n terms of odd natural number and their sum .


#include<stdio.h>
int main()
{
int n,i,sum=0;
printf("Enter the value of n:");
scanf("%d",&n);
printf("\nThe odd numbers are :");
for(i=1;i<=n;++i)
	{
		printf("\t%d",2*i-1);
		sum+=2*i-1;
	}
printf("\n\nSum of %d odd natural numbers is :%d",n,sum);
return 0;
}
