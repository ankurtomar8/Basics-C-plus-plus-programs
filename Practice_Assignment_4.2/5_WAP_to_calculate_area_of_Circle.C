#include<stdio.h>
int main()
{
    float area_of_circle = 0.0 ;

    float radius = 0 ;

    printf("Enter Value of Radius of Circle \n " );

    scanf(" %f",&radius);

    area_of_circle = (22/7) * (radius* radius) ; // calculating area of circle 

    printf("The area of Circle =  %f \n" ,area_of_circle);

    return 0 ;

}