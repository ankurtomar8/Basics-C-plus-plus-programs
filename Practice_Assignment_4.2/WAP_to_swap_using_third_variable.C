#include<stdio.h>
int main(){
    int a = 10 , b = 20  , temp = 0 ;

    printf("Value of a = %d & b = %d before swapping \n" ,a,b);

    temp = a;
    a = b;
    b = temp;

printf("Value of a = %d & b = %d after swapping \n" ,a,b);
    return 0;

}