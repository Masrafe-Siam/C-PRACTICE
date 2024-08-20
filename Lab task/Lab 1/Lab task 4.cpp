//4.Temperature of a city in Fahrenheit degrees is input through the keyboard. Write a program to convert this temperature into Centigrade degrees.


#include<stdio.h>
main()
{
	double fahrenheit,centigrade;
	printf("Enter temperature in fahrenheit:");
	scanf("%lf",&fahrenheit);
	centigrade=(5.0/9.0)*(fahrenheit-32);
	printf("Temperature:%f ",centigrade);
	return 0;
}
