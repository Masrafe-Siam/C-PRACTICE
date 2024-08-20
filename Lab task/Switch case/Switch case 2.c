#include<stdio.h>
int main()
{
	char ch;
	int a,b,add,mul,sub,div;
    printf("Enter operation:");
	scanf("%c",&ch);	
	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	switch(ch)
	{
		case '+':
		add=a+b;	
		printf("Calculation=%d",add);	
		break;
		case '-':
		sub=a-b;	
		printf("Calculation=%d",sub);
		break;
		case '*':
		mul=a*b;
	    printf("Calculation=%d",mul);	
		break;
		case '/':
		div=a/b;	
		printf("Calculation=%d",div);
		break;	
		default:
		printf("No case");			
	}
	return 0;	
}
