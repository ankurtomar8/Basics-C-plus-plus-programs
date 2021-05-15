#include<iostream>

using namespace std;

int main()
{
    int age = 0;

    cout<<"Enter the age "<<endl;
    cin >> age;

    if(age >= 12 && age<= 50)
    {
        cout<<"The Person is Young"<<endl;; 

    }

    else 
    cout<<"Not Young "<<endl;

    if(age>=12 || age<=50)
        cout<<"Eligible";

     else
     cout<<"Not Eligible";   


    return 0;
}