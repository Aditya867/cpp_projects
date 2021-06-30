#include <iostream>

using namespace std;

class construct
{

public:

    construct()
    {
    cout<<"constructor is called"<<endl;

    }
    ~construct()         
    {                    

    cout<<"destructor is called"<<endl;
    }
    void fun()
    {

    cout<<"Hello world "<<endl;
    }
};
int main()
{                          
    construct c;
    c.fun();
    return 0;
}