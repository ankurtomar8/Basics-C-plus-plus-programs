#include<stdio.h>
int main()
{
    int a = 10 , b = 20 ;

    printf(" Values of a = %d & b = %d  before swapping \n ",a ,b);
    
    a = a + b ; //  a = 30 total
    b = a - b ; // b =  10  total
    a = a - b; // a = 20 total 
    printf(" Values of a = %d & b = %d  before swapping  \n",a,b);

    return 0 ;
}