//2.The distance between Mirpur and Ashulia is input through the keyboard. Write a program to convert and print this distance in meter, feet, inches and centimeters.


#include<stdio.h>
int main()
{
	float km,meter,feet,inches,centimeter;
	printf("Enter distance: ");
	scanf("%f",&km);
	meter=km*1000;
	feet=km*3280.8399;
	inches=km*39370.078;
	centimeter=km*100000;
	printf("Distance in meter:%.2f\n",meter);
	printf("Distance in feet:%.2f\n",feet);
	printf("Distance in inches:%.2f\n",inches);
	printf("Distance in centimeter:%.2f\n",centimeter);
	return 0;
}
