#include <iostream>

using namespace std;
int main()
{
   int a,b;
   string pattern= "OPERATORS";
   for (a=0;a<=8;a++)
   {
    cout<<pattern.substr(0,a)<<endl;
   }
    return 0;
}