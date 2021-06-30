#include <iostream>

using namespace std;
int main()
{
    int a, b;
    cout<<" enter the value of a:"<<endl;
    cin>>a;
    cout<<" enter the value of b:"<<endl;
    cin>>b;
    cout << "Bitwise AND of a and b :"<< (a&b) <<endl;
    cout << "Bitwise OR of a and b :"<< (a|b) <<endl;
    cout <<"exclusive OR :"<< (a^b) <<endl; // bitwise exclusive OR
    cout << "COMPLEMENT :"<<(~a)<<endl; // BITWISE complement of a
    cout << (a>>b)<<endl;//shift right
    cout <<(a<<b)<< endl;//shift left

    return 0;

}