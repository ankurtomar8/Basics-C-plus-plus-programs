#include<bits/stdc++.h>
using namespace std;

int main(){
    int  i , n ,count=0 ;
    cout<<"Enter value of n" <<endl;
    cin>>n;

    for (i = 1 ; i <=n ; i++)
    {
        if(n%i==0){
            count++;
        }
    }

    if(count == 2){
        cout<<"Given Number is Prime"<<endl;
    }
    else
    cout<<"Not A Prime Number "<<endl;
   

    return 0;
}