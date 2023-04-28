/*
 convierte de celsius a fahrenheit
*/

#include<stdio.h>

void main(){
    float fahr, celsius;
    int lower, upper, slep;

    lower = 0;
    upper = 300;
    slep = 10;
    celsius = lower;

    printf("%s \n", "De celsius a fahrenheit");

    while(celsius <= upper)
    {
        fahr = (celsius * 9.0/5.0) + 32;
        printf("%3.0f \t %3.2f \n", celsius, fahr);
        
        celsius = celsius + slep;
    }
}