#include<iostream>
using namespace std;

class Employee{
  string name;
  int id;
  double salary;

  public:
  void input(){
    cout<<"Enter name of employee:"<<endl;
    cin>>name;
    cout<<"Enter id of employee :"<<endl;
    cin>>id;
    cout<<"Enter salary of employee:"<<endl;
    cin>>salary;
  }

  void display(){
    cout<<name<<"\t\t"<<id<<"\t"<<salary<<endl;
  }
};
int main(){
  Employee e[5];
  for(int i=0;i<5;i++){
    e[i].input();
  }
  cout<<"Name:  \t"<<"Id number:\t"<<"Salary"<<endl;
  for(int i=0;i<5;i++){
    e[i].display();
  }
  system("pause");
  return 0;
}