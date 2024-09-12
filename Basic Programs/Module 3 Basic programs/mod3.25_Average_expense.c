// 26.Convert temperature Fahrenheit to Celsius

#include<stdio.h>
main()
{
	float fahr,Celsius;
	
	printf("Enter the temperature in fahrenheit");
    scanf("%f",&fahr);
    
    Celsius=(fahr-32)*5/9;
    
    printf("The temperature in Celsius is- %f",Celsius);
    
}
