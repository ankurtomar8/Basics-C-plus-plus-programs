#include<iostream>

using namespace std;

int main()
{

float amount , discount ;

cin>>amount>>discount;

if (amount >= 5000 ){
   discount = amount - amount * 20/100;
     cout <<"Discounted amount is " <<discount<<endl;
    
}
else if (amount <=2000 && amount < 5000 )
{
   discount = amount- amount * 10/100;
    cout <<"Discounted amount is " <<discount <<endl;
    
}

else {
    discount = amount - amount * 5/100;
    cout <<"Discounted amount is " <<discount <<endl;
  

}
return 0;
}