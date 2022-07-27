/*celcius to farenheit conversion*/

#include<stdio.h>
void main()
{
    float c,f;
    printf("enter the temperature in celcius: ");
    scanf("%f",&c);
    f=c*9/5+32;
    printf("temperature in farenheit: %f",f);
}

