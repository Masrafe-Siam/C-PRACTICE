#include<stdio.h>
int main()
{
	int a,b,add,sub,mul,div,divi;
	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	add=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	divi=a%b;
	printf("Addition=%d\n",add);
	printf("Substraction=%d\n",sub);
	printf("Multiply=%d\n",mul);
	printf("Division=%d\n",div);
	printf("Divisible=%d\n",divi);
	return 0;
}
