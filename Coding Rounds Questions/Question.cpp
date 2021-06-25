#include<iostream>
using namespace std;
int a = 2;
int fun(int *a)
{
    ::a *= *a;
    cout<< ::a <<endl;
    return *a;
}

int main()
{
   int a = 9;
   int &x = ::a;

   ::a += fun(&x);
   cout<<x;

   
}