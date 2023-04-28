/*
    convertir de celsius a farh, comenzando desde 300 y terminando en 0
    desde 20 en 20
*/

#include<stdio.h>

void main()
{
    float fahr;

    for (int celsius = 300; celsius >= 0; celsius = celsius - 10)
    {
        fahr = (celsius * 9.0/5.0) + 32;
        printf("%3d \t %3.2f \n", celsius, fahr);
    }
    
}