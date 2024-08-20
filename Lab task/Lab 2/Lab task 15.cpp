//2.Any integer is input through the keyboard. Write a program to find out whether itis an odd number or even number.


#include<stdio.h>
int main()
{
	int a;
	printf("Enter the number :");
	scanf("%d",&a);
	if(a%2==0)
	{	
		printf("Even Number");	
	}
	else
	{
		printf("Odd Number");
	}
	return 0;
}
