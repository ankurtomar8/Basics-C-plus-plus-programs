#include<stdio.h>
int main()
{
    int a ,  b , c , x = 10 , y= 10 , z  = 10 ;

    a  = x++; // increment value operator
    b = ++y; // increment value operator

    printf(" The value of a is  %d \n" , a); 
    printf(" The value of b is %d \n" , b); 

    // Decrement Operator 

    a = x--;
   
    b = --y;

    printf(" The value of a is  %d \n" , a); 
    printf(" The value of b is %d \n" , b); 



        return 0;

}