#include<iostream>

using namespace std ;

int main()
{
    int a , b, c ;

    cout<<"Enter three numbers"<<endl;

    cin>>a>>b>>c;

    if (a>b && b>c)
    cout <<"the greater is" <<a;
    else if(b>c)
    cout<<"the greater is" << b;
    else 
    cout<<"greater is " <<c;

    return  0;
}