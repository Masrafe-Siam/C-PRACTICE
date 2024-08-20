//6.Write a program in C to display the n terms of even natural number and their sum.



#include<stdio.h>
int main()
{
int n,i,sum=0;
printf("Enter the value of n:");
scanf("%d",&n);
printf("\nThe even numbers are :");
for(i=1;i<=n;++i)
	{
		printf("\t%d",2*i);
		sum+=2*i;
	}
printf("\n\nSum of %d even natural numbers is :%d",n,sum);
return 0;
}
