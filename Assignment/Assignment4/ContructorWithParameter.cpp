#include <iostream>

using namespace std;

class point
{

private:
    int a,b;

public:
    point( int x, int y) 
    {
        a=x;
        b=y;
    }
    int geta()
    {
        return a;                                                
    }
    int getb()
    {
        return b;
    }
};
int main()
{
    point p(5,10);  
    cout<<"a: "<<p.geta()<<endl;
    cout<<"b: "<<p.getb()<<endl;
    return 0;
}