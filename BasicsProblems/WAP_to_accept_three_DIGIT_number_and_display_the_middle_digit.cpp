#include<iostream>
using namespace std;

int main(){

int number;

cout<<"Enter a three digit number"<<endl;

cin >> number;

// logic goes here

int result = (number / 10) % 10; // logic same can be increase for four digit as well any digit number 

cout<<"The middle digit is "<<result <<endl;

return 0;
}