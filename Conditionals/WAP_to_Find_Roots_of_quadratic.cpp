#include<iostream>
#include<math.h>

using namespace std;

int main()
{
 float a, b,c , d;

 cout<<"Enter the value of a , b , c respectively" <<endl;

 cin >> a >> b >> c ; // Input 

 d = b*b - 4*a*c ;



 if (d == 0)
{
    cout<<"roots are real and equal" <<endl;
    cout<<"roots are " << (-b/2*a);

}

    else if (d > 0 )
    {
        cout<<"roots are distinct" <<endl;
        cout<<"roots are " << ((-b+sqrt(d))/(2*a)) <<endl;
        cout<<"roots are " << ((-b-sqrt(d))/(2*a)) <<endl;

    }

    else {

        cout<<"roots are not real and doesn't exists"<<endl;
    }
    



    return 0;
}