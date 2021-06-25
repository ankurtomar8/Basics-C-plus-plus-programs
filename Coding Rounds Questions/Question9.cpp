#include<iostream>
using namespace std;

class Test {
    public:
    Test();
    ~Test();
};

Test::Test()
{
    cout<<"Constructor is Executed \n";
}

Test::~Test(){
    cout<<"Destructor is Executed \n";
}
    

int main()
{
    delete new Test();
    return 0; 
}