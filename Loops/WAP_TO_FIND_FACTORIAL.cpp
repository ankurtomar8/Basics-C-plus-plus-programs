#include<bits/stdc++.h>
using namespace std;

int main(){
    int  i , n ,sum=1 ;
    cout<<"Enter value of n" <<endl;
    cin>>n;

    for (i = 1 ; i <=n ; i++)
    {
        sum *= i;
    }

    cout<<"Factorial of Given Number  : = "<<sum <<endl;

    return 0;
}