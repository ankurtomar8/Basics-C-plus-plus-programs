#include<stdio.h>

int main()
{
    int firstnumber = 0 , second_number = 0 , thirdnumber = 0;
    int average ;

    printf("\nEnter first Number \n");
    scanf("%d",&firstnumber);

    printf("\nEnter Second Number \n");
    scanf("%d",&second_number);

    printf("\nEnter Third Number \n");
    scanf("%d",&thirdnumber);

        average = firstnumber + second_number + thirdnumber ;

        average = average / 3;

        printf("The average of three numbers is  =%d",average);

        return 0 ;
}