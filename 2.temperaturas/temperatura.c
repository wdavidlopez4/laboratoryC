/*
    convierte la temperatura de fahrenheit a celsius,
    donde, fahrenheit comienza desde 0 y termina en 300 desde 20 en 20
*/

#include<stdio.h>

int main(){
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;

    printf("%s \n", "De fahrenheit a celsius");

    while(fahr <= upper)
    {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.2f \n", fahr, celsius);

        fahr = fahr + step;
    }
}