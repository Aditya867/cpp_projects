#include <iostream>

using namespace std;

class office
{
private:
    double totalwage, daily,bonus;

public:
   string name, address;

    office( double x, double y)
    {
        daily=x;
        bonus=y;
    }
    office (office &w1) 
    {
        daily=w1.daily;
        bonus=w1.bonus;
    }
    double total()
    {
        totalwage=daily+bonus;
        return totalwage;
    }

};
int main()
{
    office w1(200,100);
    cout<<"TOTAL WAGE :"<<w1.total()<<endl;
    office w2=w1;
    cout<<"TOTAL WAGE :"<<w2.total()<<endl;

    return 0;
}