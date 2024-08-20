/*6.Write a program to check whether a triangle is valid or not, when the three angles of the triangle are entered through the keyboard. 
A triangle is valid if the sum of all the three angles is equal to 180 degrees.*/



#include<stdio.h>
int main()
{
	int first_angel,second_angel,third_angel,sum;	
	printf("Enter first angel of traingle:");
	scanf("%d",&first_angel);		
	printf("Enter second angel of traingle:");
	scanf("%d",&second_angel);	
	printf("Enter third angel of traingle:");
	scanf("%d",&third_angel);
	sum=first_angel+second_angel+third_angel;	
	if(sum==180)
	{	
		printf("Triangle is valid");
	}
	else
	{	
		printf("Triangle is invalid");		
	}	
	return 0;	
}

