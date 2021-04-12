#include<stdio.h>
int main()
{
    int area = 0  , base = 0 , height = 0;
    
    printf("\n Enter Value of Base ");
    scanf(" %d",&base);
    printf("\n The Value Enter of Base is = %d  ",base);

    printf(" \n Enter Value of Height ");
    scanf(" %d",&height);
    printf("\n The Value Enter of Height is = %d  \n\n ",height);

    // logic for calculation

    area = base  * height ;
    area = area / 2 ;

    printf(" \n The calculated area of triangle is = %d \n \n ",area);
    return 0 ;
}