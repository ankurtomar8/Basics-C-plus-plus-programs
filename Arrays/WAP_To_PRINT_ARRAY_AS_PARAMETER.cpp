#include<bits/stdc++.h>
using namespace std;

int fun(int A[] , int n)
{
    int sum;
 for (int i = 0 ; i < n ; i++){
     cout<<" \t "<<A[i];
       sum += A[i];
    
 }
  cout<<" \nsum "<<sum;
}
 int main()
 {
     int A[] = {10,20,30,40,50,60,70};

     fun(A,6);

     return 0;
 
}