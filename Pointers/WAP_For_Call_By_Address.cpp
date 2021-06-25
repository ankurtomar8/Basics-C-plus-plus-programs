#include<bits/stdc++.h>

using namespace std;

int swap (int *a , int *b){
    int temp ;
     temp = *a;
     *a = *b;
     *b = temp;
}

int main(){
    int a = 10 , b = 20;

    cout<<"\n Value Before Swapping "<< a << " "<<b;
    swap(&a , &b);
    cout<<"\n Value After Swapping "<< a << " "<<b;
    
    return 0;

}