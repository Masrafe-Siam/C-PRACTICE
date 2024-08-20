#include<stdio.h>
int main()
{
	double a,b,add,sub,mul,div;
	printf("Enter the number a:");
	scanf("%lf",&a);
	printf("Enter the number b:");
	scanf("%lf",&b);
	add=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	printf("Addition=%.5f\n",add);
	printf("Substract=%.5f\n",sub);
	printf("Multiply=%.5f\n",mul);
	printf("Division=%.5f\n",div);
    return 0;	
}
