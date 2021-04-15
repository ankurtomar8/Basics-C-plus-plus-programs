#include<stdio.h>

int main(){

    float celsius = 1 , fahrenheit = 1 ;

    printf(" \n Enter value of temperature in celsius \n");

    scanf("%f",&celsius);

    fahrenheit = ((9 * celsius) / 5) + 32; 

    printf(" \n The temperature in fahrenheit  = %f ",fahrenheit);

    return 0 ;
}