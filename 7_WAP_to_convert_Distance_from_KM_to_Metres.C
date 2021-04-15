#include<stdio.h>

int main(){

    int KM = 0 , Metre = 0;

    printf(" \n Enter distance in kilo metres \n ");
    scanf("%d",&KM);

    Metre = KM * 1000;

    printf("The distance is %d meters ",Metre);

    return 0;
}