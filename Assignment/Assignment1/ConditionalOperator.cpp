#include <iostream>

using namespace std;
int main()
{
    double age,price;
    cout<<"enter age :"<<endl;
    cin>> age;
    price=(age<18)? 100:200; // if condition is true value of price will be assigned 100 else it will be 200.
    cout<<" The ticket price is Rs."<<price<<endl;
    return 0;

}