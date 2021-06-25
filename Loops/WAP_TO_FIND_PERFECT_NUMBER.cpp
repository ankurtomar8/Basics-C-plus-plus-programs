#include<bits/stdc++.h>
using namespace std;

int main(){
    int  i , n ,sum=0 ;
    cout<<"Enter value of n" <<endl;
    cin>>n;

    for (i = 1 ; i <=n ; i++)
    {
        if(n % i==0){
            sum += i;
       }
     
        
    }

     if(2 * n == sum){
           cout<<"Perfect Number" <<endl;
       }

    else{
         cout<<"Not A Perfect Number" <<endl;
    }

    cout<<"Sum of Factors of  Number  : = "<< sum <<endl;

    return 0;
}