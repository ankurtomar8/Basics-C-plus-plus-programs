#include<iostream>
using namespace std;

int main()
{
    int m1 , m2 , m3 , Total ;

    cout<<"Enter the marks of Marks of Student of three subject"<<endl;

    cin>> m1 >> m2 >> m3 ;

    Total =  m1+m2+m3;

    Total = float(Total/3);

    if (Total >= 60)
    {
        cout<<"Grade is  A "<<endl;
    }
    else if (Total < 60 && Total >=35 )
    {
        cout<<"Grade is B"<<endl;
    } 

    else{
        cout<<"Grade is C " <<endl;
    }

    

    return 0;
    
  }