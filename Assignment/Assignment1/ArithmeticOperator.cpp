#include <iostream>

using namespace std;
int main()
{
    int add, subtract, num1, num2, divide, remainder;

    cout<<"INPUT FIRST NUMBER :"<<endl;
    cin >> num1;

    cout <<"ENTER SECOND NUMBER :"<< endl;
    cin >>num2;

    add = num1+num2;
    subtract= num1-num2;
    divide= num1/num2;
    remainder= num1%num2;

    cout << "The sum of two numbers is :"<< add << endl;
    cout << "the subtraction of two numbers is :"<< subtract << endl;
    cout << "The quotient when "<< num1<< " is divided by "<< num2 << " is "<< divide << endl;
    cout << "The remainder when "<< num1<< " is divided by "<< num2 << " is "<< remainder << endl;
    return 0;
}