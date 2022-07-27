/*farenheit to celcius conversion*/

#include<stdio.h>
void main()
{
    float c,f;
    printf("enter the temperature in farenheit: ");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("temperature in celcius: %f",c);
}