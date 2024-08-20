//8.Write a program to check the area of the triangle is greater than the perimeter of the triangle.




#include<stdio.h>
main()
{
double length,breadth,area,perimeter;
printf("Enter the length:");
scanf("%lf",&length);
printf("Enter the breadth:");
scanf("%lf",&breadth);
area=length*breadth;
perimeter=2*(length+breadth);
if(area>perimeter)
{
	printf("Area is greater than perimeter");
}
else
{
	printf("Perimeter is greater than area");	
}
return 0;
}
