#include <iostream>

using namespace std;
int main()
{
   int inputage, myage=20;
   cout <<" WHAT IS YOUR AGE ?"<<endl;
   cin>>inputage;

   if(inputage<myage)
   {
    cout<<"Oh, You are "<< myage-inputage<<" years younger than me."<<endl;
    }
    else if (inputage>20)
    {
        cout << "So, you are "<<inputage-myage<<" years older than me."<< endl;

    }
    else {
        cout << "We are of same age. Wow. "<<endl;
    }

    return 0;
}