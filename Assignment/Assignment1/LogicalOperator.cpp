#include <iostream>

using namespace std;
int main()
{
  int x = 15 ,y = 5;
  cout << (x > 3 && y == 10)<< endl; // returns 0 (false)/ LOGICAL AND
  cout << (x > 3 || y == 10)<< endl; // returns 1 (true)/ LOGICAL OR
  cout << !(x > 3 && y == 10)<< endl;// returns 1 (true)/ LOGICAL NOT

  return 0;

}