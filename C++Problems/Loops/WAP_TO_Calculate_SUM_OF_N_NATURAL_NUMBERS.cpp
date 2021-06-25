#include<bits/stdc++.h>
using namespace std;

int main(){
    int  i , n ,sum=0 ;
    cout<<"Enter value of n" <<endl;
    cin>>n;

    for (i = 0 ; i <=n ; i++)
    {
        sum += i;
    }

    cout<<"Sum of N Natural Numbers  : ="<<sum <<endl;

    return 0;
}