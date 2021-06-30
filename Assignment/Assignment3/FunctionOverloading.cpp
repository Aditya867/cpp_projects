#include<iostream>
using namespace std;

void add(int a, int b)
{
    int sum;
    sum =a+b;
   cout <<"sum :"<< sum<<endl;
}
void add(float a, int b, float c)
{
    int sum;
    sum=a+b+c;
    cout <<"sum :"<< sum<<endl;

}
void add(int a, float b )
{
    int sum;
    sum=a+b;
    cout <<"sum :"<< sum<<endl;

}
int main()
{
    add(4,5);
    add(1,3,8);
    add(9,1);
    return 0;
}