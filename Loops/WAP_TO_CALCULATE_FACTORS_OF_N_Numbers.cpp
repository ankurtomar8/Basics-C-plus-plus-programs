#include<bits/stdc++.h>
using namespace std;

int main(){
    int  i , n  ;
    cout<<"Enter value of n" <<endl;
    cin>>n;

    for (i = 1 ; i <=n ; i++)
    {
       if(n % i==0){
           cout<<"  "<<i;
       }
    }

    /* cout<<"Factors Of N Numbers : = "<<i ; */

    return 0;
}