//10.Write a program to find out your grade in final exam. Taking the marks input from user. Follow DIU grading method.


#include<stdio.h>
int main()
{	
double marks;
int a;
printf("Enter your marks:");
scanf("%lf",&marks);
	if(marks>=80 && marks<=100)
{
	printf("Grade:A+\n");
	printf("CGPA:%.2f",4.00);
}
	else if(marks>=75 && marks<=79)
{	
	printf("Grade:A\n");
	printf("CGPA:%.2f",3.75);
}
	else if(marks>=70 && marks<=74)
{	
	printf("Grade:A-\n");
	printf("CGPA:%.2f",3.50);
}
	else if(marks>=65 && marks<=69)
{	
	printf("Grade:B+\n");
	printf("CGPA:%.2f",3.25);
}
	else if(marks>=60 && marks<=64)
{	
	printf("Grade:B\n");
	printf("CGPA:%.2f",3.00);
}
	else if(marks>=55 && marks<=59)
{	
	printf("Grade:B-\n");
	printf("CGPA:%.2f",2.75);
}
	else if(marks>=50 && marks<=54)
{		
	printf("Grade:C+\n");
	printf("CGPA:%.2f",2.50);
}
	else if(marks>=45 && marks<=49)
{		
	printf("Grade:C\n");
	printf("CGPA:%.2f",2.25);
}
	else if(marks>=40 && marks<=44)
{		
	printf("Grade:D\n");
	printf("CGPA:%.2f",2.00);
}
	else if(marks>=00 && marks<=39)
{		
	printf("Grade:F\n");
	printf("CGPA:%.2f",0.00);
}
	else
{
	printf("eroor");
}	
	return 0;	
}
