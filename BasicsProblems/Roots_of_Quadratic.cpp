#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a , b, c,x1,x2 ;
    

    cout << "Enter the coefficients  of x^2 , x , constant respectively"<<endl;
    cin >>a >>b >> c;
    // logic goes here
    x1 = (-b - sqrt(b*b - 4*a*c))/(2*a);
    x2 = (-b + sqrt(b*b - 4*a*c))/(2*a);

    cout<<"the roots are is " << x1 <<endl << x2;
    return 0;


}


         