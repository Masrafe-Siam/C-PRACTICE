#include<stdio.h>
int main()
{
	float a,b,add,sub,mul,div; 
    printf("Enter a number:");
	scanf("%f",&a);
	printf("Enter a number:");
	scanf("%f",&b);
	add=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	printf("Addition:%.3f\n",add);
	printf("Substraction:%.3f\n",sub);
	printf("Multiply:%.3f\n",mul);
	printf("Division:%.3f\n",div);
    return 0;
}
