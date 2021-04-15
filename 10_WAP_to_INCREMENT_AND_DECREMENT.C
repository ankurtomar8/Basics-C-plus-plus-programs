#include<stdio.h>
int main()
{
    int a = 10 , b = 11 ,c = 0;

    c = a++ + ++b ; // 22
    printf("\n The value of c %d \n" , c); 
      printf("\n The value of a %d \n" , a );//10 
        printf("\n The value of b %d \n" , b); //12

          printf("\n Another operation \n");

           a = 10 , b = 11 ; 

          c = ++b - --b - --a + a++ ; //   0

     printf("\n The value of c %d \n" , c); // 0
      printf("\n The value of a %d \n" , a );//-1 
        printf("\n The value of b %d \n" , b); // -1

      printf("\n Another third operation \n");

           a = 10 , b = 11 ; 

          c = ++a * --b - --a / a++ ; //   109

     printf("\n The value of c %d \n" , c); // 144
      printf("\n The value of a %d \n" , a );//11 
        printf("\n The value of b %d \n" , b); // 10

        return 0 ; 



}