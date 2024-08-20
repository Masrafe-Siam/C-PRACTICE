//5.Check the following number prime or not by taking input from the user.


#include<stdio.h>  
int main()
{    
int a,i,b=0,f=0,g;    
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
return 0;  
}
