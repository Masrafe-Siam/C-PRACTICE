//Write a C program to check whether a given number is an armstrong number or not


#include <stdio.h>
#include<math.h>
int main()
{
    int num,count=0,rem,res=0;
    printf("Enter the number to reverse: ");
    scanf("%d",&num);
	int temp=num;   
    while (temp!= 0)
	{
        temp=temp/10;
        count+=1;
    }  
	temp=count;
	int temp_a=num;
    while (temp!= 0)
	{
        rem=temp_a % 10;
        res+=pow(rem,count);
        temp_a=temp_a/10;
        temp--;
	}
    printf("The reversed number is: %d\n",res);
    if(num==res)
	{
    	printf("The num is armstrong number.");
	}
	else{

		printf("The num is not armstrong number.");
}
    return 0;
}

