/*1.Write a menu driven program which has following options:
1) Factorial of a number
2) Prime or not
3) odd or even
4) exit*/




#include<stdio.h>
#include<math.h>
int main()
{
int ch,i,a,fac=1,b,g,f;
printf("1:Factorial of a number\n");
printf("2:Prime or not\n");
printf("3:Odd or Even\n");
printf("4:Exit\n");
printf("Choose the number: ");
scanf("%d",&ch);
printf("\n\n");
switch (ch)
{	
case 1:	
printf("Enter a number: ");    
scanf("%d",&a);    
for(i=1;i<=a;i++)
{    
fac=fac*i;    
}
printf("Factorial of %d is: %d",a,fac);
break;
case 2:
printf("Enter the number: ");    
scanf("%d",&a);  
b=a/2;   
for(i=2;i<=b;i++)   
{  
g=a%i;
if(g==0)    
{    
printf("%d is not a prime number",a);    
f=1;    
break;    
}    
}    
if(f==0)    
printf("%d is a prime number",a);  
break;
case 3:
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
break;
default:
printf("No case");
return 0;
}
}
