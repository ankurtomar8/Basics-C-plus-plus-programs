#include<stdio.h>
int main()
{
     float SimpleInterest , priAmt , rate , time = 0.0;
    printf("\n Enter  Principle Amount :  \n ");
    scanf(" %f" , &priAmt);
    printf("\n Enter Rate :  \n ");
    scanf(" %f" , &rate);
    printf("\n Enter Time : \n ");
    scanf(" %f",&time);

    SimpleInterest = priAmt * rate * time ;
    
    SimpleInterest = SimpleInterest / 100;

    printf("\n The Simple Interest is = %f  \n " , SimpleInterest);

     return 0;
}