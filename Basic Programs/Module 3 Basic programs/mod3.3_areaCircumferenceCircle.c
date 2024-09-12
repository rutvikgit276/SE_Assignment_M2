//WAP to Find Area And Circumference of Circle
// Area=Pi.r.r		Circum=2.PI.r

#include<stdio.h>
main()
{
	int r=10;
	float pi=3.14,Area,Circumference;
	Area=pi*r*r;
	printf("\n\n\t Radius:10");
	printf("\n\n\t Area of circle:%.2f",Area);
	
	Circumference=2*pi*r;
	printf("\n\n\t Circumference of circle:%.2f",Circumference);
		
}
